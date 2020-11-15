cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Item5_project)

add_executable(Item5_project
		${PROJECT_SRC_DIR}/item5.cpp)
