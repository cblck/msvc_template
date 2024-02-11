## msvc_template - msbuild
- Attempt reap the benefits of [best practices cmake_template](https://github.com/cblck/cmake_template) within the VS2022 MSBuild ecosystem.
- Targets: `clang-cl (x86, x64)`, `cl (x86, x64)`, `gcc (x64)`.


### Configurations
|   Config  |  Optimizations  | Unified-Build | Description |
|-----------|:---------------:|---------------|-------------|
| Debug     | `/Od` `-Od`     | N/A           | Convention  |
| RelDbg    | `/O2` `(-O2)`   | clang, msvc	  | Development |
| Release   | `/O2` `(-O3)`   | clang, msvc	  | Test / Ship |


### Adding a vcpkg dependency
1. Add the new `dependencies` name to `vcpkg.json`.
1. Update `AdditionalDependencies` and `LibraryDependencies` in `myproject.vcxproj`.
    - *See `<Add '*.lib' files here>` and `<Add 'lib*.a' files here>`*.
1. Build the project
    - WSL uses a pre-build step to copy `vcpkg.json` then invokes vcpkg.
    - WSL uses a post-build step to copy headers to `/extras/.../include/` for host IntelliSense.

