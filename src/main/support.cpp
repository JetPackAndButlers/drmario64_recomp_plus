#include "zelda_support.h"
#include <SDL.h>
#include "nfd.h"
#include "RmlUi/Core.h"

namespace zelda64 {
    namespace {
        struct NfdScope {
            bool initialized = false;

            NfdScope() {
                // NFD requires per-thread initialization; dialogs may be opened from non-main threads.
                const nfdresult_t init_result = NFD_Init();
                initialized = (init_result == NFD_OKAY);

                if (init_result == NFD_ERROR) {
                    const char* err = NFD_GetError();
                    SDL_ShowSimpleMessageBox(
                        SDL_MESSAGEBOX_ERROR,
                        "File Dialog Error",
                        (err && err[0]) ? err : "Native file dialog initialization failed.",
                        nullptr
                    );
                    NFD_ClearError();
                }
            }

            ~NfdScope() {
                if (initialized) {
                    NFD_Quit();
                }
            }
        };

        void show_nfd_error_message(const char* title) {
            const char* err = NFD_GetError();
            SDL_ShowSimpleMessageBox(
                SDL_MESSAGEBOX_ERROR,
                title,
                (err && err[0]) ? err : "Native file dialog failed.",
                nullptr
            );
            NFD_ClearError();
        }
    }

    // MARK: - Internal Helpers
    void perform_file_dialog_operation(const std::function<void(bool, const std::filesystem::path&)>& callback) {
        NfdScope nfd;
        if (!nfd.initialized) {
            callback(false, {});
            return;
        }

        nfdnchar_t* native_path = nullptr;
        nfdresult_t result = NFD_OpenDialogN(&native_path, nullptr, 0, nullptr);

        bool success = (result == NFD_OKAY);
        std::filesystem::path path;

        if (success) {
            path = std::filesystem::path{native_path};
            NFD_FreePathN(native_path);
        }
        else if (result == NFD_ERROR) {
            show_nfd_error_message("File Dialog Error");
        }

        callback(success, path);
    }

    void perform_file_dialog_operation_multiple(const std::function<void(bool, const std::list<std::filesystem::path>&)>& callback) {
        NfdScope nfd;
        if (!nfd.initialized) {
            callback(false, {});
            return;
        }

        const nfdpathset_t* native_paths = nullptr;
        nfdresult_t result = NFD_OpenDialogMultipleN(&native_paths, nullptr, 0, nullptr);

        bool success = (result == NFD_OKAY);
        std::list<std::filesystem::path> paths;
        nfdpathsetsize_t count = 0;

        if (success) {
            NFD_PathSet_GetCount(native_paths, &count);
            for (nfdpathsetsize_t i = 0; i < count; i++) {
                nfdnchar_t* cur_path = nullptr;
                nfdresult_t cur_result = NFD_PathSet_GetPathN(native_paths, i, &cur_path);
                if (cur_result == NFD_OKAY) {
                    paths.emplace_back(std::filesystem::path{cur_path});
                }
            }
            NFD_PathSet_Free(native_paths);
        }
        else if (result == NFD_ERROR) {
            show_nfd_error_message("File Dialog Error");
        }

        callback(success, paths);
    }

    // MARK: - Public API

    std::filesystem::path get_program_path() {
#if defined(__APPLE__)
        return get_bundle_resource_directory();
#elif defined(__linux__) && defined(RECOMP_FLATPAK)
        return "/app/bin";
#else
        return "";
#endif
    }

    std::filesystem::path get_asset_path(const char* asset) {
        return get_program_path() / "assets" / asset;
    }

    void open_file_dialog(std::function<void(bool success, const std::filesystem::path& path)> callback) {
#ifdef __APPLE__
        dispatch_on_ui_thread([callback]() {
            perform_file_dialog_operation(callback);
        });
#else
        perform_file_dialog_operation(callback);
#endif
    }

    void open_file_dialog_multiple(std::function<void(bool success, const std::list<std::filesystem::path>& paths)> callback) {
#ifdef __APPLE__
        dispatch_on_ui_thread([callback]() {
            perform_file_dialog_operation_multiple(callback);
        });
#else
        perform_file_dialog_operation_multiple(callback);
#endif
    }

    void show_error_message_box(const char *title, const char *message) {
#ifdef __APPLE__
    std::string title_copy(title);
    std::string message_copy(message);

    dispatch_on_ui_thread([title_copy, message_copy] {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title_copy.c_str(), message_copy.c_str(), nullptr);
    });
#else
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_ERROR, title, message, nullptr);
#endif
    }
}
