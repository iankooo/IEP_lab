cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Item6_project)

add_executable(Item6_project
		${PROJECT_SRC_DIR}/item6.cpp)
