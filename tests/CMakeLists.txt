set(CMAKE_BUILD_TYPE Debug)

add_executable(tests tests.c)

target_link_libraries(tests elementals)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_test(NAME TestMain COMMAND $<TARGET_FILE:tests>)