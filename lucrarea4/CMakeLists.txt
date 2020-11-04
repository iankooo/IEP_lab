cmake_minimum_required(VERSION 3.10)

set(PROJECT_SRC_DIR ./src)
set(CMAKE_CXX_COMPILER "/usr/bin/g++")

project(Folder_project)

add_executable(Folder_project
		${PROJECT_SRC_DIR}/folder.cpp
		${PROJECT_SRC_DIR}/folder.h
		${PROJECT_SRC_DIR}/file.cpp
		${PROJECT_SRC_DIR}/file.h)
