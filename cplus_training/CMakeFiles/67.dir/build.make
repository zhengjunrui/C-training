# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/zhengjunrui/cplus_training/C-training/cplus_training

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zhengjunrui/cplus_training/C-training/cplus_training

# Include any dependencies generated for this target.
include CMakeFiles/67.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/67.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/67.dir/flags.make

CMakeFiles/67.dir/67.cpp.o: CMakeFiles/67.dir/flags.make
CMakeFiles/67.dir/67.cpp.o: 67.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/zhengjunrui/cplus_training/C-training/cplus_training/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/67.dir/67.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/67.dir/67.cpp.o -c /home/zhengjunrui/cplus_training/C-training/cplus_training/67.cpp

CMakeFiles/67.dir/67.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/67.dir/67.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/zhengjunrui/cplus_training/C-training/cplus_training/67.cpp > CMakeFiles/67.dir/67.cpp.i

CMakeFiles/67.dir/67.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/67.dir/67.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/zhengjunrui/cplus_training/C-training/cplus_training/67.cpp -o CMakeFiles/67.dir/67.cpp.s

CMakeFiles/67.dir/67.cpp.o.requires:
.PHONY : CMakeFiles/67.dir/67.cpp.o.requires

CMakeFiles/67.dir/67.cpp.o.provides: CMakeFiles/67.dir/67.cpp.o.requires
	$(MAKE) -f CMakeFiles/67.dir/build.make CMakeFiles/67.dir/67.cpp.o.provides.build
.PHONY : CMakeFiles/67.dir/67.cpp.o.provides

CMakeFiles/67.dir/67.cpp.o.provides.build: CMakeFiles/67.dir/67.cpp.o

# Object files for target 67
67_OBJECTS = \
"CMakeFiles/67.dir/67.cpp.o"

# External object files for target 67
67_EXTERNAL_OBJECTS =

67: CMakeFiles/67.dir/67.cpp.o
67: CMakeFiles/67.dir/build.make
67: CMakeFiles/67.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable 67"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/67.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/67.dir/build: 67
.PHONY : CMakeFiles/67.dir/build

CMakeFiles/67.dir/requires: CMakeFiles/67.dir/67.cpp.o.requires
.PHONY : CMakeFiles/67.dir/requires

CMakeFiles/67.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/67.dir/cmake_clean.cmake
.PHONY : CMakeFiles/67.dir/clean

CMakeFiles/67.dir/depend:
	cd /home/zhengjunrui/cplus_training/C-training/cplus_training && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zhengjunrui/cplus_training/C-training/cplus_training /home/zhengjunrui/cplus_training/C-training/cplus_training /home/zhengjunrui/cplus_training/C-training/cplus_training /home/zhengjunrui/cplus_training/C-training/cplus_training /home/zhengjunrui/cplus_training/C-training/cplus_training/CMakeFiles/67.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/67.dir/depend

