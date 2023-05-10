add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE random)

find_package(GTest CONFIG REQUIRED)
# Link against Google Test
target_link_libraries(tests PRIVATE GTest::gtest GTest::gtest_main)

# Add a custom command to copy the library to the test output directory
add_custom_command(
    TARGET tests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:random> ${CMAKE_BINARY_DIR}/tests
)

# Add the test target
include(GoogleTest)
gtest_discover_tests(tests)