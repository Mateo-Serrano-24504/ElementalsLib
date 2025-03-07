set(SOURCES
    builders.c
    destroyers.c
    getters.c
    setters.c
    tracker.c
    elem_t.c
)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

add_library(elementals STATIC ${SOURCES})

target_include_directories(elementals PUBLIC ${CMAKE_SOURCE_DIR}/include)