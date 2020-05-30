cmake_minimum_required(VERSION 3.15)

cmake_add_executable({PROJECT_NAME} main.cpp)

target_link_libraries({PROJECT_NAME} PRIVATE lib{PROJECT_NAME})
