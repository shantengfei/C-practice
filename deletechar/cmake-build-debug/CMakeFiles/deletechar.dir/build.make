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
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/deletechar

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/deletechar/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/deletechar.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/deletechar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/deletechar.dir/flags.make

CMakeFiles/deletechar.dir/main.cpp.o: CMakeFiles/deletechar.dir/flags.make
CMakeFiles/deletechar.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/deletechar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/deletechar.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/deletechar.dir/main.cpp.o -c /home/shantengfei/CLionProjects/deletechar/main.cpp

CMakeFiles/deletechar.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/deletechar.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/deletechar/main.cpp > CMakeFiles/deletechar.dir/main.cpp.i

CMakeFiles/deletechar.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/deletechar.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/deletechar/main.cpp -o CMakeFiles/deletechar.dir/main.cpp.s

CMakeFiles/deletechar.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/deletechar.dir/main.cpp.o.requires

CMakeFiles/deletechar.dir/main.cpp.o.provides: CMakeFiles/deletechar.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/deletechar.dir/build.make CMakeFiles/deletechar.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/deletechar.dir/main.cpp.o.provides

CMakeFiles/deletechar.dir/main.cpp.o.provides.build: CMakeFiles/deletechar.dir/main.cpp.o


# Object files for target deletechar
deletechar_OBJECTS = \
"CMakeFiles/deletechar.dir/main.cpp.o"

# External object files for target deletechar
deletechar_EXTERNAL_OBJECTS =

deletechar: CMakeFiles/deletechar.dir/main.cpp.o
deletechar: CMakeFiles/deletechar.dir/build.make
deletechar: CMakeFiles/deletechar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/deletechar/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable deletechar"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/deletechar.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/deletechar.dir/build: deletechar

.PHONY : CMakeFiles/deletechar.dir/build

CMakeFiles/deletechar.dir/requires: CMakeFiles/deletechar.dir/main.cpp.o.requires

.PHONY : CMakeFiles/deletechar.dir/requires

CMakeFiles/deletechar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/deletechar.dir/cmake_clean.cmake
.PHONY : CMakeFiles/deletechar.dir/clean

CMakeFiles/deletechar.dir/depend:
	cd /home/shantengfei/CLionProjects/deletechar/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/deletechar /home/shantengfei/CLionProjects/deletechar /home/shantengfei/CLionProjects/deletechar/cmake-build-debug /home/shantengfei/CLionProjects/deletechar/cmake-build-debug /home/shantengfei/CLionProjects/deletechar/cmake-build-debug/CMakeFiles/deletechar.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/deletechar.dir/depend

