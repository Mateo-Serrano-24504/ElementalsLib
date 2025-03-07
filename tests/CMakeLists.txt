set(CMAKE_BUILD_TYPE Debug)

find_program(VALGRIND "valgrind")

if (NOT VALGRIND)
    message(FATAL_ERROR "Missing Valgrind")
endif()

add_executable(tests tests.c)

target_link_libraries(tests elementals)

add_test(NAME TestMain COMMAND ${VALGRIND} --leak-check=full --show-leak-kinds=all $<TARGET_FILE:tests>)