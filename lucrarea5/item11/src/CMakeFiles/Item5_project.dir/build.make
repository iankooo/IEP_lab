# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/cmake/619/bin/cmake

# The command to remove a file.
RM = /snap/cmake/619/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ianko/Desktop/lucrarea5/item11

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ianko/Desktop/lucrarea5/item11/src

# Include any dependencies generated for this target.
include CMakeFiles/Item5_project.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Item5_project.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Item5_project.dir/flags.make

CMakeFiles/Item5_project.dir/item11.cpp.o: CMakeFiles/Item5_project.dir/flags.make
CMakeFiles/Item5_project.dir/item11.cpp.o: item11.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ianko/Desktop/lucrarea5/item11/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Item5_project.dir/item11.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Item5_project.dir/item11.cpp.o -c /home/ianko/Desktop/lucrarea5/item11/src/item11.cpp

CMakeFiles/Item5_project.dir/item11.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Item5_project.dir/item11.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ianko/Desktop/lucrarea5/item11/src/item11.cpp > CMakeFiles/Item5_project.dir/item11.cpp.i

CMakeFiles/Item5_project.dir/item11.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Item5_project.dir/item11.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ianko/Desktop/lucrarea5/item11/src/item11.cpp -o CMakeFiles/Item5_project.dir/item11.cpp.s

# Object files for target Item5_project
Item5_project_OBJECTS = \
"CMakeFiles/Item5_project.dir/item11.cpp.o"

# External object files for target Item5_project
Item5_project_EXTERNAL_OBJECTS =

Item5_project: CMakeFiles/Item5_project.dir/item11.cpp.o
Item5_project: CMakeFiles/Item5_project.dir/build.make
Item5_project: CMakeFiles/Item5_project.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ianko/Desktop/lucrarea5/item11/src/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Item5_project"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Item5_project.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Item5_project.dir/build: Item5_project

.PHONY : CMakeFiles/Item5_project.dir/build

CMakeFiles/Item5_project.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Item5_project.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Item5_project.dir/clean

CMakeFiles/Item5_project.dir/depend:
	cd /home/ianko/Desktop/lucrarea5/item11/src && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ianko/Desktop/lucrarea5/item11 /home/ianko/Desktop/lucrarea5/item11 /home/ianko/Desktop/lucrarea5/item11/src /home/ianko/Desktop/lucrarea5/item11/src /home/ianko/Desktop/lucrarea5/item11/src/CMakeFiles/Item5_project.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Item5_project.dir/depend
