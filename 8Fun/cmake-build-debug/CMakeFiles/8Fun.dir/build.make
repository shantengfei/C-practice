# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.8

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/shantengfei/Downloads/clion-2017.2.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/shantengfei/Downloads/clion-2017.2.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/8Fun

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/8Fun/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/8Fun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/8Fun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/8Fun.dir/flags.make

CMakeFiles/8Fun.dir/main.cpp.o: CMakeFiles/8Fun.dir/flags.make
CMakeFiles/8Fun.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/8Fun/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/8Fun.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/8Fun.dir/main.cpp.o -c /home/shantengfei/CLionProjects/8Fun/main.cpp

CMakeFiles/8Fun.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/8Fun.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/8Fun/main.cpp > CMakeFiles/8Fun.dir/main.cpp.i

CMakeFiles/8Fun.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/8Fun.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/8Fun/main.cpp -o CMakeFiles/8Fun.dir/main.cpp.s

CMakeFiles/8Fun.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/8Fun.dir/main.cpp.o.requires

CMakeFiles/8Fun.dir/main.cpp.o.provides: CMakeFiles/8Fun.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/8Fun.dir/build.make CMakeFiles/8Fun.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/8Fun.dir/main.cpp.o.provides

CMakeFiles/8Fun.dir/main.cpp.o.provides.build: CMakeFiles/8Fun.dir/main.cpp.o


# Object files for target 8Fun
8Fun_OBJECTS = \
"CMakeFiles/8Fun.dir/main.cpp.o"

# External object files for target 8Fun
8Fun_EXTERNAL_OBJECTS =

8Fun: CMakeFiles/8Fun.dir/main.cpp.o
8Fun: CMakeFiles/8Fun.dir/build.make
8Fun: CMakeFiles/8Fun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/8Fun/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 8Fun"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/8Fun.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/8Fun.dir/build: 8Fun

.PHONY : CMakeFiles/8Fun.dir/build

CMakeFiles/8Fun.dir/requires: CMakeFiles/8Fun.dir/main.cpp.o.requires

.PHONY : CMakeFiles/8Fun.dir/requires

CMakeFiles/8Fun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/8Fun.dir/cmake_clean.cmake
.PHONY : CMakeFiles/8Fun.dir/clean

CMakeFiles/8Fun.dir/depend:
	cd /home/shantengfei/CLionProjects/8Fun/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/8Fun /home/shantengfei/CLionProjects/8Fun /home/shantengfei/CLionProjects/8Fun/cmake-build-debug /home/shantengfei/CLionProjects/8Fun/cmake-build-debug /home/shantengfei/CLionProjects/8Fun/cmake-build-debug/CMakeFiles/8Fun.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/8Fun.dir/depend
