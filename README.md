# classicWinGui
Classic Windows style inspired graphical user interface designed to look classy on anything

## How to setup and build
In order to build the engine alone, you will be needing:
* C++ compiler - tested on MSVC 19.42.34433 x64
* CMake - version 3.21 or higher is recommended, as it is supposedly required by VS 2022 and Xcode 12 (lower version will require change in CMakeLists.txt)
* SDL 3.x.x binaries and headers - it can be found in "Releases" page inside SDL repository, `devel` package contains exactly what you need (as for version 3.2.10)

### Path setup 
CMake config and executable paths of libraries **are required to be in path** otherwise CMake configure and/or build will fail. Required paths include:
* SDL - CMake config and library path

You can use one of following commands to add CMake config to path in shell temporarily, depending on shell type:
* PowerShell: `$env:Path += ";C:\<path_to_library>\cmake"`
* Command Prompt: `SET PATH=%PATH%;C:\<path_to_library>\cmake`
* Bash: `export PATH="$PATH:/<path_to_library>/cmake"`

Same goes for executable paths, you need to add directories containing compiled library files (.lib, .dll, .so, etc.)

You can use `user_scripts` directory to store your own scripts like these above. Its contents are ignored and won't be pushed to repository by default.

In order to compile engine with example app, make a new directory, and run `cmake` commands inside:
```
cmake ..
cmake --build .
```
Depending on CMake generator (automatically selected based on system and enviroment), compiled and linked engine with example app will be placed somewhere in build directory. You can install and specify generator in first `cmake` command call, using the `-G` flag. Example:
```
cmake .. -G "NMake Makefiles"
```


