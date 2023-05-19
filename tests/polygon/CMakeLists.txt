add_executable(
    polygon
    polygons.cpp
)

target_link_libraries(
    polygon
    GTest::gtest_main
    geom
)

gtest_discover_tests(polygon)
