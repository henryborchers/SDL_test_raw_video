set(SOURCE_FILES main.c)
include_directories(${CMAKE_SOURCE_DIR}/lib)
add_executable(raw_video_data ${SOURCE_FILES})
target_link_libraries(raw_video_data displayer)