add_executable(
    vectors
    vectors.cpp
)


target_link_libraries(
    vectors
    GTest::gtest_main
    geom
)


gtest_discover_tests(vectors)
