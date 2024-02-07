## msvc_template - msbuild
- Attempt reap the benefits of [best practices cmake_template](https://github.com/cblck/cmake_template) within the VS2022 MSBuild ecosystem.


### Configurations
|   Config  |  Optimizations  | Unified-Build | Description |
|-----------|:---------------:|---------------|-------------|
| Debug     | /O0             | Disabled	  | Convention  |
| RelDbg    | /O2             | clang/msvc	  | Development |
| Release   | /O3             | clang/msvc	  | Test / Ship |


### Enabling mingw-g++ msbuild (GDB and Intellisense do not work)
1. Install mingw in the WSL Ubuntu: `sudo apt-get install gcc-mingw-w64 g++-mingw-w64 mingw-w64`
1. Update c compiler and linker: `x86_64-w64-mingw32-gcc`
1. Update C++ compiler: `x86_64-w64-mingw32-g++`
1. Update linker: `i686-w64-mingw32-g++` (x86) and `x86_64-w64-mingw32-g++` (x64)
1. Additional Options for x86 builds: `-m32`
1. STL: Static GNU Standard C++ Library (-static)
1. Additional gcc linker options: `-static -static-libgcc -static-libstdc++`