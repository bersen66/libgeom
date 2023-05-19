# libgeom

## INSTALLATION

```cmake
include(FetchContent)

FetchContent_Declare(
        geom
        GIT_REPOSITORY https://github.com/bersen66/libgeom.git
        GIT_TAG  master
)

FetchContent_MakeAvailable(geom)

add_executable(test_fc main.cpp)

target_link_libraries(test_fc geom)
```