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
CMAKE_SOURCE_DIR = /home/pkwon/2014018940/hw5-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pkwon/2014018940/hw5-1/Build

# Include any dependencies generated for this target.
include CMakeFiles/cmdarg.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cmdarg.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cmdarg.dir/flags.make

CMakeFiles/cmdarg.dir/cmdarg.cc.o: CMakeFiles/cmdarg.dir/flags.make
CMakeFiles/cmdarg.dir/cmdarg.cc.o: ../cmdarg.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pkwon/2014018940/hw5-1/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cmdarg.dir/cmdarg.cc.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cmdarg.dir/cmdarg.cc.o -c /home/pkwon/2014018940/hw5-1/cmdarg.cc

CMakeFiles/cmdarg.dir/cmdarg.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cmdarg.dir/cmdarg.cc.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pkwon/2014018940/hw5-1/cmdarg.cc > CMakeFiles/cmdarg.dir/cmdarg.cc.i

CMakeFiles/cmdarg.dir/cmdarg.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cmdarg.dir/cmdarg.cc.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pkwon/2014018940/hw5-1/cmdarg.cc -o CMakeFiles/cmdarg.dir/cmdarg.cc.s

CMakeFiles/cmdarg.dir/cmdarg.cc.o.requires:

.PHONY : CMakeFiles/cmdarg.dir/cmdarg.cc.o.requires

CMakeFiles/cmdarg.dir/cmdarg.cc.o.provides: CMakeFiles/cmdarg.dir/cmdarg.cc.o.requires
	$(MAKE) -f CMakeFiles/cmdarg.dir/build.make CMakeFiles/cmdarg.dir/cmdarg.cc.o.provides.build
.PHONY : CMakeFiles/cmdarg.dir/cmdarg.cc.o.provides

CMakeFiles/cmdarg.dir/cmdarg.cc.o.provides.build: CMakeFiles/cmdarg.dir/cmdarg.cc.o


# Object files for target cmdarg
cmdarg_OBJECTS = \
"CMakeFiles/cmdarg.dir/cmdarg.cc.o"

# External object files for target cmdarg
cmdarg_EXTERNAL_OBJECTS =

cmdarg: CMakeFiles/cmdarg.dir/cmdarg.cc.o
cmdarg: CMakeFiles/cmdarg.dir/build.make
cmdarg: CMakeFiles/cmdarg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pkwon/2014018940/hw5-1/Build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable cmdarg"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cmdarg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cmdarg.dir/build: cmdarg

.PHONY : CMakeFiles/cmdarg.dir/build

CMakeFiles/cmdarg.dir/requires: CMakeFiles/cmdarg.dir/cmdarg.cc.o.requires

.PHONY : CMakeFiles/cmdarg.dir/requires

CMakeFiles/cmdarg.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cmdarg.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cmdarg.dir/clean

CMakeFiles/cmdarg.dir/depend:
	cd /home/pkwon/2014018940/hw5-1/Build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pkwon/2014018940/hw5-1 /home/pkwon/2014018940/hw5-1 /home/pkwon/2014018940/hw5-1/Build /home/pkwon/2014018940/hw5-1/Build /home/pkwon/2014018940/hw5-1/Build/CMakeFiles/cmdarg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cmdarg.dir/depend

