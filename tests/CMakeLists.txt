add_executable(tests tests.cpp)
target_link_libraries(tests PRIVATE random)

# Add Catch2
find_package(Catch2 CONFIG REQUIRED)
target_link_libraries(tests PRIVATE Catch2::Catch2 Catch2::Catch2WithMain)

# Add a custom command to copy the library to the test output directory
add_custom_command(
    TARGET tests POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E copy $<TARGET_FILE:random> ${CMAKE_BINARY_DIR}/bin/tests
)