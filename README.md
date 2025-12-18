# drmario64_recomp_plus


## Overview

Dr. Mario 64 Recomp is a modernized recompilation build focused on improved rendering,
smoother motion, and quality-of-life enhancements while remaining faithful to the original game.

## Highlights (v1.0.0)

- Custom icon set (red and blue capsule)
- Updated main menu with tuned default Recomp64 settings
- Pills are now rendered on the GPU instead of the CPU
- Interpolation support for smooth 60+ FPS gameplay
- 4-player controller support
- CRT effects support

## Requirements

- Dr. Mario 64 (US) ROM  
  A clean, vanilla US ROM is required at runtime.

## Known Issues

- Very lightly tested overall

## Dependencies

- git
- C (C17) and C++ (C++20) compilers  
  - Clang 15 or newer is recommended
- SDL2  
  - Must be built from source on Linux  
  - Example:

    ```bash
    wget https://www.libsdl.org/release/SDL2-2.26.1.tar.gz
    tar -xzf SDL2-2.26.1.tar.gz
    cd SDL2-2.26.1
    ./configure
    make -j $(nproc)
    sudo make install
    ```

- libgtk-3-dev

## Build

The listed commits below are known-good and able to build this repository.

These instructions target Linux.  
For Windows builds, Visual Studio is required. Refer to the Zelda recomp repository
for Windows setup guidance.

- Clone with submodules:
  - `git clone --recurse-submodules`
  - or `git submodule update --init --recursive`

- Follow the decomp setup instructions up to and including `make setup`  
  (<https://github.com/AngheloAlf/drmario64>, commit `91dab37987bdad4d100958685cc10a011d4917dd`)
  - Copy the generated `baserom_uncompressed.us.z64` from the decomp root
  - Place it in this project’s root and rename it to:
    `drmario64_uncompressed.us.z64`

- Build N64Recomp  
  (<https://github.com/Mr-Wiseguy/N64Recomp>, commit `a13e5cff96686776b0e03baf23923e3c1927b770`)
  - Copy the following binaries into this project’s root:
    - `build/N64Recomp`
    - `build/RSPRecomp`

- Run recompilation steps:
  ```bash
  ./N64Recomp drmario64.us.toml
  ./RSPRecomp aspMain.us.toml
