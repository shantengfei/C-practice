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
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/arryPtr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/arryPtr/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arryPtr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/arryPtr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arryPtr.dir/flags.make

CMakeFiles/arryPtr.dir/main.cpp.o: CMakeFiles/arryPtr.dir/flags.make
CMakeFiles/arryPtr.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/arryPtr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arryPtr.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/arryPtr.dir/main.cpp.o -c /home/shantengfei/CLionProjects/arryPtr/main.cpp

CMakeFiles/arryPtr.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arryPtr.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/arryPtr/main.cpp > CMakeFiles/arryPtr.dir/main.cpp.i

CMakeFiles/arryPtr.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arryPtr.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/arryPtr/main.cpp -o CMakeFiles/arryPtr.dir/main.cpp.s

CMakeFiles/arryPtr.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/arryPtr.dir/main.cpp.o.requires

CMakeFiles/arryPtr.dir/main.cpp.o.provides: CMakeFiles/arryPtr.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/arryPtr.dir/build.make CMakeFiles/arryPtr.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/arryPtr.dir/main.cpp.o.provides

CMakeFiles/arryPtr.dir/main.cpp.o.provides.build: CMakeFiles/arryPtr.dir/main.cpp.o


# Object files for target arryPtr
arryPtr_OBJECTS = \
"CMakeFiles/arryPtr.dir/main.cpp.o"

# External object files for target arryPtr
arryPtr_EXTERNAL_OBJECTS =

arryPtr: CMakeFiles/arryPtr.dir/main.cpp.o
arryPtr: CMakeFiles/arryPtr.dir/build.make
arryPtr: CMakeFiles/arryPtr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/arryPtr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable arryPtr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/arryPtr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arryPtr.dir/build: arryPtr

.PHONY : CMakeFiles/arryPtr.dir/build

CMakeFiles/arryPtr.dir/requires: CMakeFiles/arryPtr.dir/main.cpp.o.requires

.PHONY : CMakeFiles/arryPtr.dir/requires

CMakeFiles/arryPtr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/arryPtr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/arryPtr.dir/clean

CMakeFiles/arryPtr.dir/depend:
	cd /home/shantengfei/CLionProjects/arryPtr/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/arryPtr /home/shantengfei/CLionProjects/arryPtr /home/shantengfei/CLionProjects/arryPtr/cmake-build-debug /home/shantengfei/CLionProjects/arryPtr/cmake-build-debug /home/shantengfei/CLionProjects/arryPtr/cmake-build-debug/CMakeFiles/arryPtr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arryPtr.dir/depend

