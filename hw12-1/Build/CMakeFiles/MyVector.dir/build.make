# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pkwon/2014018940/hw12-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pkwon/2014018940/hw12-1/Build

# Include any dependencies generated for this target.
include CMakeFiles/MyVector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MyVector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MyVector.dir/flags.make

CMakeFiles/MyVector.dir/MyVector_main.cc.o: CMakeFiles/MyVector.dir/flags.make
CMakeFiles/MyVector.dir/MyVector_main.cc.o: ../MyVector_main.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pkwon/2014018940/hw12-1/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MyVector.dir/MyVector_main.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyVector.dir/MyVector_main.cc.o -c /home/pkwon/2014018940/hw12-1/MyVector_main.cc

CMakeFiles/MyVector.dir/MyVector_main.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyVector.dir/MyVector_main.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pkwon/2014018940/hw12-1/MyVector_main.cc > CMakeFiles/MyVector.dir/MyVector_main.cc.i

CMakeFiles/MyVector.dir/MyVector_main.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyVector.dir/MyVector_main.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pkwon/2014018940/hw12-1/MyVector_main.cc -o CMakeFiles/MyVector.dir/MyVector_main.cc.s

CMakeFiles/MyVector.dir/MyVector_main.cc.o.requires:

.PHONY : CMakeFiles/MyVector.dir/MyVector_main.cc.o.requires

CMakeFiles/MyVector.dir/MyVector_main.cc.o.provides: CMakeFiles/MyVector.dir/MyVector_main.cc.o.requires
	$(MAKE) -f CMakeFiles/MyVector.dir/build.make CMakeFiles/MyVector.dir/MyVector_main.cc.o.provides.build
.PHONY : CMakeFiles/MyVector.dir/MyVector_main.cc.o.provides

CMakeFiles/MyVector.dir/MyVector_main.cc.o.provides.build: CMakeFiles/MyVector.dir/MyVector_main.cc.o


CMakeFiles/MyVector.dir/MyVector.cc.o: CMakeFiles/MyVector.dir/flags.make
CMakeFiles/MyVector.dir/MyVector.cc.o: ../MyVector.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pkwon/2014018940/hw12-1/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MyVector.dir/MyVector.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MyVector.dir/MyVector.cc.o -c /home/pkwon/2014018940/hw12-1/MyVector.cc

CMakeFiles/MyVector.dir/MyVector.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MyVector.dir/MyVector.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pkwon/2014018940/hw12-1/MyVector.cc > CMakeFiles/MyVector.dir/MyVector.cc.i

CMakeFiles/MyVector.dir/MyVector.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MyVector.dir/MyVector.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pkwon/2014018940/hw12-1/MyVector.cc -o CMakeFiles/MyVector.dir/MyVector.cc.s

CMakeFiles/MyVector.dir/MyVector.cc.o.requires:

.PHONY : CMakeFiles/MyVector.dir/MyVector.cc.o.requires

CMakeFiles/MyVector.dir/MyVector.cc.o.provides: CMakeFiles/MyVector.dir/MyVector.cc.o.requires
	$(MAKE) -f CMakeFiles/MyVector.dir/build.make CMakeFiles/MyVector.dir/MyVector.cc.o.provides.build
.PHONY : CMakeFiles/MyVector.dir/MyVector.cc.o.provides

CMakeFiles/MyVector.dir/MyVector.cc.o.provides.build: CMakeFiles/MyVector.dir/MyVector.cc.o


# Object files for target MyVector
MyVector_OBJECTS = \
"CMakeFiles/MyVector.dir/MyVector_main.cc.o" \
"CMakeFiles/MyVector.dir/MyVector.cc.o"

# External object files for target MyVector
MyVector_EXTERNAL_OBJECTS =

MyVector: CMakeFiles/MyVector.dir/MyVector_main.cc.o
MyVector: CMakeFiles/MyVector.dir/MyVector.cc.o
MyVector: CMakeFiles/MyVector.dir/build.make
MyVector: CMakeFiles/MyVector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pkwon/2014018940/hw12-1/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MyVector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MyVector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MyVector.dir/build: MyVector

.PHONY : CMakeFiles/MyVector.dir/build

CMakeFiles/MyVector.dir/requires: CMakeFiles/MyVector.dir/MyVector_main.cc.o.requires
CMakeFiles/MyVector.dir/requires: CMakeFiles/MyVector.dir/MyVector.cc.o.requires

.PHONY : CMakeFiles/MyVector.dir/requires

CMakeFiles/MyVector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MyVector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MyVector.dir/clean

CMakeFiles/MyVector.dir/depend:
	cd /home/pkwon/2014018940/hw12-1/Build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pkwon/2014018940/hw12-1 /home/pkwon/2014018940/hw12-1 /home/pkwon/2014018940/hw12-1/Build /home/pkwon/2014018940/hw12-1/Build /home/pkwon/2014018940/hw12-1/Build/CMakeFiles/MyVector.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MyVector.dir/depend

