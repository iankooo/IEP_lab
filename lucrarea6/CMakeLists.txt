cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(lucrarea6)

add_executable(lucrarea6
		${PROJECT_SRC_DIR}/lucrarea6.cpp)
