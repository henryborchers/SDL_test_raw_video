set(displayer_src displayer.c displayer.h)
find_package(SDL2 REQUIRED)
include_directories(${SDL2_INCLUDE_DIR})
add_library(displayer ${displayer_src})
target_link_libraries(displayer ${SDL2_LIBRARIES})

