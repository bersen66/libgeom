
add_library(geom INTERFACE)

target_include_directories(
    geom 
    INTERFACE $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include> 
)

target_compile_features(
    geom
    INTERFACE cxx_std_20
)
