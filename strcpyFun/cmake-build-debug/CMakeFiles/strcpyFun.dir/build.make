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
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/strcpyFun

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/strcpyFun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strcpyFun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strcpyFun.dir/flags.make

CMakeFiles/strcpyFun.dir/main.cpp.o: CMakeFiles/strcpyFun.dir/flags.make
CMakeFiles/strcpyFun.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strcpyFun.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strcpyFun.dir/main.cpp.o -c /home/shantengfei/CLionProjects/strcpyFun/main.cpp

CMakeFiles/strcpyFun.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strcpyFun.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/strcpyFun/main.cpp > CMakeFiles/strcpyFun.dir/main.cpp.i

CMakeFiles/strcpyFun.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strcpyFun.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/strcpyFun/main.cpp -o CMakeFiles/strcpyFun.dir/main.cpp.s

CMakeFiles/strcpyFun.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/strcpyFun.dir/main.cpp.o.requires

CMakeFiles/strcpyFun.dir/main.cpp.o.provides: CMakeFiles/strcpyFun.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/strcpyFun.dir/build.make CMakeFiles/strcpyFun.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/strcpyFun.dir/main.cpp.o.provides

CMakeFiles/strcpyFun.dir/main.cpp.o.provides.build: CMakeFiles/strcpyFun.dir/main.cpp.o


# Object files for target strcpyFun
strcpyFun_OBJECTS = \
"CMakeFiles/strcpyFun.dir/main.cpp.o"

# External object files for target strcpyFun
strcpyFun_EXTERNAL_OBJECTS =

strcpyFun: CMakeFiles/strcpyFun.dir/main.cpp.o
strcpyFun: CMakeFiles/strcpyFun.dir/build.make
strcpyFun: CMakeFiles/strcpyFun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable strcpyFun"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strcpyFun.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strcpyFun.dir/build: strcpyFun

.PHONY : CMakeFiles/strcpyFun.dir/build

CMakeFiles/strcpyFun.dir/requires: CMakeFiles/strcpyFun.dir/main.cpp.o.requires

.PHONY : CMakeFiles/strcpyFun.dir/requires

CMakeFiles/strcpyFun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strcpyFun.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strcpyFun.dir/clean

CMakeFiles/strcpyFun.dir/depend:
	cd /home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/strcpyFun /home/shantengfei/CLionProjects/strcpyFun /home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug /home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug /home/shantengfei/CLionProjects/strcpyFun/cmake-build-debug/CMakeFiles/strcpyFun.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strcpyFun.dir/depend
