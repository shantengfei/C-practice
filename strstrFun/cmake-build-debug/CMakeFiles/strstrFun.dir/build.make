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
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/strstrFun

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/strstrFun/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/strstrFun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strstrFun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strstrFun.dir/flags.make

CMakeFiles/strstrFun.dir/main.cpp.o: CMakeFiles/strstrFun.dir/flags.make
CMakeFiles/strstrFun.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/strstrFun/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strstrFun.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/strstrFun.dir/main.cpp.o -c /home/shantengfei/CLionProjects/strstrFun/main.cpp

CMakeFiles/strstrFun.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/strstrFun.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/strstrFun/main.cpp > CMakeFiles/strstrFun.dir/main.cpp.i

CMakeFiles/strstrFun.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/strstrFun.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/strstrFun/main.cpp -o CMakeFiles/strstrFun.dir/main.cpp.s

CMakeFiles/strstrFun.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/strstrFun.dir/main.cpp.o.requires

CMakeFiles/strstrFun.dir/main.cpp.o.provides: CMakeFiles/strstrFun.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/strstrFun.dir/build.make CMakeFiles/strstrFun.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/strstrFun.dir/main.cpp.o.provides

CMakeFiles/strstrFun.dir/main.cpp.o.provides.build: CMakeFiles/strstrFun.dir/main.cpp.o


# Object files for target strstrFun
strstrFun_OBJECTS = \
"CMakeFiles/strstrFun.dir/main.cpp.o"

# External object files for target strstrFun
strstrFun_EXTERNAL_OBJECTS =

strstrFun: CMakeFiles/strstrFun.dir/main.cpp.o
strstrFun: CMakeFiles/strstrFun.dir/build.make
strstrFun: CMakeFiles/strstrFun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/strstrFun/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable strstrFun"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strstrFun.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strstrFun.dir/build: strstrFun

.PHONY : CMakeFiles/strstrFun.dir/build

CMakeFiles/strstrFun.dir/requires: CMakeFiles/strstrFun.dir/main.cpp.o.requires

.PHONY : CMakeFiles/strstrFun.dir/requires

CMakeFiles/strstrFun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strstrFun.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strstrFun.dir/clean

CMakeFiles/strstrFun.dir/depend:
	cd /home/shantengfei/CLionProjects/strstrFun/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/strstrFun /home/shantengfei/CLionProjects/strstrFun /home/shantengfei/CLionProjects/strstrFun/cmake-build-debug /home/shantengfei/CLionProjects/strstrFun/cmake-build-debug /home/shantengfei/CLionProjects/strstrFun/cmake-build-debug/CMakeFiles/strstrFun.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strstrFun.dir/depend

