# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = /home/shantengfei/Downloads/clion-2017.3/bin/cmake/bin/cmake

# The command to remove a file.
RM = /home/shantengfei/Downloads/clion-2017.3/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/mystrcmp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/mystrcmp.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mystrcmp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mystrcmp.dir/flags.make

CMakeFiles/mystrcmp.dir/main.cpp.o: CMakeFiles/mystrcmp.dir/flags.make
CMakeFiles/mystrcmp.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mystrcmp.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mystrcmp.dir/main.cpp.o -c /home/shantengfei/CLionProjects/mystrcmp/main.cpp

CMakeFiles/mystrcmp.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mystrcmp.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/mystrcmp/main.cpp > CMakeFiles/mystrcmp.dir/main.cpp.i

CMakeFiles/mystrcmp.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mystrcmp.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/mystrcmp/main.cpp -o CMakeFiles/mystrcmp.dir/main.cpp.s

CMakeFiles/mystrcmp.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/mystrcmp.dir/main.cpp.o.requires

CMakeFiles/mystrcmp.dir/main.cpp.o.provides: CMakeFiles/mystrcmp.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/mystrcmp.dir/build.make CMakeFiles/mystrcmp.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/mystrcmp.dir/main.cpp.o.provides

CMakeFiles/mystrcmp.dir/main.cpp.o.provides.build: CMakeFiles/mystrcmp.dir/main.cpp.o


# Object files for target mystrcmp
mystrcmp_OBJECTS = \
"CMakeFiles/mystrcmp.dir/main.cpp.o"

# External object files for target mystrcmp
mystrcmp_EXTERNAL_OBJECTS =

mystrcmp: CMakeFiles/mystrcmp.dir/main.cpp.o
mystrcmp: CMakeFiles/mystrcmp.dir/build.make
mystrcmp: CMakeFiles/mystrcmp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mystrcmp"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mystrcmp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mystrcmp.dir/build: mystrcmp

.PHONY : CMakeFiles/mystrcmp.dir/build

CMakeFiles/mystrcmp.dir/requires: CMakeFiles/mystrcmp.dir/main.cpp.o.requires

.PHONY : CMakeFiles/mystrcmp.dir/requires

CMakeFiles/mystrcmp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mystrcmp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mystrcmp.dir/clean

CMakeFiles/mystrcmp.dir/depend:
	cd /home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/mystrcmp /home/shantengfei/CLionProjects/mystrcmp /home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug /home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug /home/shantengfei/CLionProjects/mystrcmp/cmake-build-debug/CMakeFiles/mystrcmp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/mystrcmp.dir/depend

