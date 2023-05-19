add_executable(test_rview rview.cpp)
target_link_libraries(test_rview GTest::gtest_main geom)
gtest_discover_tests(test_rview)

