cmake_minimum_required(VERSION 3.0)

project(lab5_CMAKE) 

add_executable(${PROJECT_NAME} L5_C35472.c)

target_link_libraries(${PROJECT_NAME}  cjson)