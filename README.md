# libgeom
Just learning how to integrate libraries with  FetchContent CMake infrastructure
## INSTALLATION

```cmake

# FETCHING PART
include(FetchContent)

FetchContent_Declare(
        geom
        URL https://github.com/bersen66/libgeom/releases/download/learning/geom.zip
)

FetchContent_MakeAvailable(geom)


# AFTER FETCHING YOU HAVE TO LINK LIBRARY TO YOUR EXECUTABLE
add_executable(test_fc main.cpp) # YOUR EXECUTABLE

target_link_libraries(test_fc geom) # LINKING
```
