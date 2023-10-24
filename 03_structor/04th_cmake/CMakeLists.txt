cmake_minimum_required(VERSION 3.6)

project(person)

message("DIR:" ${CMAKE_CURRENT_SOURCE_DIR})

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} SOURCE_LIST)

message("SOURCE_LIST:" ${SOURCE_LIST})

add_executable(${PROJECT_NAME} ${SOURCE_LIST})

