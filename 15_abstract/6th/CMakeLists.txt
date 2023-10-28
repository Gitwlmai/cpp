cmake_minimum_required(VERSION 3.6)

project("human_test")
add_subdirectory(human)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/human)
# link_directories(${CMAKE_CURRENT_SOURCE_DIR}/human)
# link_libraries(Human.a)

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE_LIST)
message("SOURCE_LIST: " ${SOURCE_LIST})
add_executable(${PROJECT_NAME} ${SOURCE_LIST})

target_link_libraries(${PROJECT_NAME} Human)