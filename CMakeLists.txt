cmake_minimum_required(VERSION 3.16)
project(geom)

set(CMAKE_CXX_STANDARD 20)


# LIB SOURCES
add_subdirectory(lib)

if (CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    # INSTALLING DEPENDENCIES
    add_subdirectory(third_party)
    # UNIT-TESTS
    enable_testing()
    add_subdirectory(tests)
endif()
