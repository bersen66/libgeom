# libgeom

## INSTALLATION

```cmake
include(FetchContent)

FetchContent_Declare(
        geom
        URL https://github.com/bersen66/libgeom/releases/download/learning/geom.zip
)

FetchContent_MakeAvailable(geom)

add_executable(test_fc main.cpp)

target_link_libraries(test_fc geom)
```