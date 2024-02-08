## msvc_template - msbuild
- Attempt reap the benefits of [best practices cmake_template](https://github.com/cblck/cmake_template) within the VS2022 MSBuild ecosystem.
- Target compilers: `clang-cl`, `cl (msvc)`, `mingw`.
- Target architectures: `x86`, `x64`.


### Configurations
|   Config  |  Optimizations  | Unified-Build | Description |
|-----------|:---------------:|---------------|-------------|
| Debug     | `/Od` `-Od`     | N/A           | Convention  |
| RelDbg    | `/O2` `(-O2)`   | clang, msvc	  | Development |
| Release   | `/O2` `(-O3)`   | clang, msvc	  | Test / Ship |


### Enabling mingw-g++ msbuild (GDB and Intellisense not working)
1. Install mingw in the default WSL Ubuntu distro: `sudo apt-get install gcc-mingw-w64 g++-mingw-w64 mingw-w64`


### Adding a vcpkg package
1. Update `vcpkg.json` with the package-name.
1. Update `AdditionalIncludeDirectories` under `<!--  WSL  Build  -->` with the package-name.
1. Update `AdditionalDependencies` with full path to the `.a` file (debug and release).

