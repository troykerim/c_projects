# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/troy/c_projects/c_projects/leap_year

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/troy/c_projects/c_projects/leap_year/build

# Include any dependencies generated for this target.
include CMakeFiles/leap_year.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/leap_year.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/leap_year.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/leap_year.dir/flags.make

CMakeFiles/leap_year.dir/leap_year.c.o: CMakeFiles/leap_year.dir/flags.make
CMakeFiles/leap_year.dir/leap_year.c.o: ../leap_year.c
CMakeFiles/leap_year.dir/leap_year.c.o: CMakeFiles/leap_year.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/troy/c_projects/c_projects/leap_year/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/leap_year.dir/leap_year.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/leap_year.dir/leap_year.c.o -MF CMakeFiles/leap_year.dir/leap_year.c.o.d -o CMakeFiles/leap_year.dir/leap_year.c.o -c /home/troy/c_projects/c_projects/leap_year/leap_year.c

CMakeFiles/leap_year.dir/leap_year.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/leap_year.dir/leap_year.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/troy/c_projects/c_projects/leap_year/leap_year.c > CMakeFiles/leap_year.dir/leap_year.c.i

CMakeFiles/leap_year.dir/leap_year.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/leap_year.dir/leap_year.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/troy/c_projects/c_projects/leap_year/leap_year.c -o CMakeFiles/leap_year.dir/leap_year.c.s

# Object files for target leap_year
leap_year_OBJECTS = \
"CMakeFiles/leap_year.dir/leap_year.c.o"

# External object files for target leap_year
leap_year_EXTERNAL_OBJECTS =

leap_year: CMakeFiles/leap_year.dir/leap_year.c.o
leap_year: CMakeFiles/leap_year.dir/build.make
leap_year: CMakeFiles/leap_year.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/troy/c_projects/c_projects/leap_year/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable leap_year"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/leap_year.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/leap_year.dir/build: leap_year
.PHONY : CMakeFiles/leap_year.dir/build

CMakeFiles/leap_year.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/leap_year.dir/cmake_clean.cmake
.PHONY : CMakeFiles/leap_year.dir/clean

CMakeFiles/leap_year.dir/depend:
	cd /home/troy/c_projects/c_projects/leap_year/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/troy/c_projects/c_projects/leap_year /home/troy/c_projects/c_projects/leap_year /home/troy/c_projects/c_projects/leap_year/build /home/troy/c_projects/c_projects/leap_year/build /home/troy/c_projects/c_projects/leap_year/build/CMakeFiles/leap_year.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/leap_year.dir/depend

