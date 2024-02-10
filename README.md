## msvc_template - msbuild
- Attempt reap the benefits of [best practices cmake_template](https://github.com/cblck/cmake_template) within the VS2022 MSBuild ecosystem.
- Target compilers: `clang-cl`, `cl (msvc)`, `gcc`.
- Target architectures: `x86`, `x64`.


### Configurations
|   Config  |  Optimizations  | Unified-Build | Description |
|-----------|:---------------:|---------------|-------------|
| Debug     | `/Od` `-Od`     | N/A           | Convention  |
| RelDbg    | `/O2` `(-O2)`   | clang, msvc	  | Development |
| Release   | `/O2` `(-O3)`   | clang, msvc	  | Test / Ship |

