set(SOURCES
    builders.c
    destroyers.c
    getters.c
    setters.c
    tracker.c
    elem_t.c
)

add_library(elementals STATIC ${SOURCES})

target_include_directories(elementals PUBLIC ${CMAKE_SOURCE_DIR}/include)