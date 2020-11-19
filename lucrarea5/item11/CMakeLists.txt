cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Item11_project)

add_executable(Item11_project
		${PROJECT_SRC_DIR}/item11.cpp)
