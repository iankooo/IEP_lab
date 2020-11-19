cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Item12_project)

add_executable(Item12_project
		${PROJECT_SRC_DIR}/item12.cpp)
