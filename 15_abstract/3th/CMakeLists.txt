cmake_minimum_required(VERSION 3.6)

project("human")

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE_LIST)
message("CMAKE_CURRENT_SOURCE_DIR: " ${CMAKE_CURRENT_SOURCE_DIR})
message("PROJECT_NAME: " ${PROJECT_NAME})
message("SOURCE_LIST: " ${SOURCE_LIST})

add_executable(${PROJECT_NAME} ${SOURCE_LIST})