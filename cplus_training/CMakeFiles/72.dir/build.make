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
CMAKE_SOURCE_DIR = /home/linuxgood/cplus/cplus_training

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/linuxgood/cplus/cplus_training

# Include any dependencies generated for this target.
include CMakeFiles/72.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/72.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/72.dir/flags.make

CMakeFiles/72.dir/72.cpp.o: CMakeFiles/72.dir/flags.make
CMakeFiles/72.dir/72.cpp.o: 72.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/linuxgood/cplus/cplus_training/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/72.dir/72.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/72.dir/72.cpp.o -c /home/linuxgood/cplus/cplus_training/72.cpp

CMakeFiles/72.dir/72.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/72.dir/72.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/linuxgood/cplus/cplus_training/72.cpp > CMakeFiles/72.dir/72.cpp.i

CMakeFiles/72.dir/72.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/72.dir/72.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/linuxgood/cplus/cplus_training/72.cpp -o CMakeFiles/72.dir/72.cpp.s

CMakeFiles/72.dir/72.cpp.o.requires:
.PHONY : CMakeFiles/72.dir/72.cpp.o.requires

CMakeFiles/72.dir/72.cpp.o.provides: CMakeFiles/72.dir/72.cpp.o.requires
	$(MAKE) -f CMakeFiles/72.dir/build.make CMakeFiles/72.dir/72.cpp.o.provides.build
.PHONY : CMakeFiles/72.dir/72.cpp.o.provides

CMakeFiles/72.dir/72.cpp.o.provides.build: CMakeFiles/72.dir/72.cpp.o

# Object files for target 72
72_OBJECTS = \
"CMakeFiles/72.dir/72.cpp.o"

# External object files for target 72
72_EXTERNAL_OBJECTS =

72: CMakeFiles/72.dir/72.cpp.o
72: CMakeFiles/72.dir/build.make
72: CMakeFiles/72.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable 72"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/72.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/72.dir/build: 72
.PHONY : CMakeFiles/72.dir/build

CMakeFiles/72.dir/requires: CMakeFiles/72.dir/72.cpp.o.requires
.PHONY : CMakeFiles/72.dir/requires

CMakeFiles/72.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/72.dir/cmake_clean.cmake
.PHONY : CMakeFiles/72.dir/clean

CMakeFiles/72.dir/depend:
	cd /home/linuxgood/cplus/cplus_training && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/linuxgood/cplus/cplus_training /home/linuxgood/cplus/cplus_training /home/linuxgood/cplus/cplus_training /home/linuxgood/cplus/cplus_training /home/linuxgood/cplus/cplus_training/CMakeFiles/72.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/72.dir/depend

