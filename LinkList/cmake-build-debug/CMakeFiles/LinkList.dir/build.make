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
CMAKE_SOURCE_DIR = /home/shantengfei/CLionProjects/LinkList

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/shantengfei/CLionProjects/LinkList/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/LinkList.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LinkList.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LinkList.dir/flags.make

CMakeFiles/LinkList.dir/main.cpp.o: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/LinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LinkList.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkList.dir/main.cpp.o -c /home/shantengfei/CLionProjects/LinkList/main.cpp

CMakeFiles/LinkList.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkList.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/LinkList/main.cpp > CMakeFiles/LinkList.dir/main.cpp.i

CMakeFiles/LinkList.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkList.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/LinkList/main.cpp -o CMakeFiles/LinkList.dir/main.cpp.s

CMakeFiles/LinkList.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/LinkList.dir/main.cpp.o.requires

CMakeFiles/LinkList.dir/main.cpp.o.provides: CMakeFiles/LinkList.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinkList.dir/build.make CMakeFiles/LinkList.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/LinkList.dir/main.cpp.o.provides

CMakeFiles/LinkList.dir/main.cpp.o.provides.build: CMakeFiles/LinkList.dir/main.cpp.o


CMakeFiles/LinkList.dir/LinkList.cpp.o: CMakeFiles/LinkList.dir/flags.make
CMakeFiles/LinkList.dir/LinkList.cpp.o: LinkList.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/shantengfei/CLionProjects/LinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/LinkList.dir/LinkList.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LinkList.dir/LinkList.cpp.o -c /home/shantengfei/CLionProjects/LinkList/cmake-build-debug/LinkList.cpp

CMakeFiles/LinkList.dir/LinkList.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LinkList.dir/LinkList.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/shantengfei/CLionProjects/LinkList/cmake-build-debug/LinkList.cpp > CMakeFiles/LinkList.dir/LinkList.cpp.i

CMakeFiles/LinkList.dir/LinkList.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LinkList.dir/LinkList.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/shantengfei/CLionProjects/LinkList/cmake-build-debug/LinkList.cpp -o CMakeFiles/LinkList.dir/LinkList.cpp.s

CMakeFiles/LinkList.dir/LinkList.cpp.o.requires:

.PHONY : CMakeFiles/LinkList.dir/LinkList.cpp.o.requires

CMakeFiles/LinkList.dir/LinkList.cpp.o.provides: CMakeFiles/LinkList.dir/LinkList.cpp.o.requires
	$(MAKE) -f CMakeFiles/LinkList.dir/build.make CMakeFiles/LinkList.dir/LinkList.cpp.o.provides.build
.PHONY : CMakeFiles/LinkList.dir/LinkList.cpp.o.provides

CMakeFiles/LinkList.dir/LinkList.cpp.o.provides.build: CMakeFiles/LinkList.dir/LinkList.cpp.o


# Object files for target LinkList
LinkList_OBJECTS = \
"CMakeFiles/LinkList.dir/main.cpp.o" \
"CMakeFiles/LinkList.dir/LinkList.cpp.o"

# External object files for target LinkList
LinkList_EXTERNAL_OBJECTS =

LinkList: CMakeFiles/LinkList.dir/main.cpp.o
LinkList: CMakeFiles/LinkList.dir/LinkList.cpp.o
LinkList: CMakeFiles/LinkList.dir/build.make
LinkList: CMakeFiles/LinkList.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/shantengfei/CLionProjects/LinkList/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable LinkList"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LinkList.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LinkList.dir/build: LinkList

.PHONY : CMakeFiles/LinkList.dir/build

CMakeFiles/LinkList.dir/requires: CMakeFiles/LinkList.dir/main.cpp.o.requires
CMakeFiles/LinkList.dir/requires: CMakeFiles/LinkList.dir/LinkList.cpp.o.requires

.PHONY : CMakeFiles/LinkList.dir/requires

CMakeFiles/LinkList.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LinkList.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LinkList.dir/clean

CMakeFiles/LinkList.dir/depend:
	cd /home/shantengfei/CLionProjects/LinkList/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/shantengfei/CLionProjects/LinkList /home/shantengfei/CLionProjects/LinkList /home/shantengfei/CLionProjects/LinkList/cmake-build-debug /home/shantengfei/CLionProjects/LinkList/cmake-build-debug /home/shantengfei/CLionProjects/LinkList/cmake-build-debug/CMakeFiles/LinkList.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/LinkList.dir/depend

