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
CMAKE_SOURCE_DIR = /home/troy/c_projects/c_projects/vowel_counter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/troy/c_projects/c_projects/vowel_counter/build

# Include any dependencies generated for this target.
include CMakeFiles/vowel_counter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/vowel_counter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/vowel_counter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vowel_counter.dir/flags.make

CMakeFiles/vowel_counter.dir/vowel_counter.c.o: CMakeFiles/vowel_counter.dir/flags.make
CMakeFiles/vowel_counter.dir/vowel_counter.c.o: ../vowel_counter.c
CMakeFiles/vowel_counter.dir/vowel_counter.c.o: CMakeFiles/vowel_counter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/troy/c_projects/c_projects/vowel_counter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/vowel_counter.dir/vowel_counter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/vowel_counter.dir/vowel_counter.c.o -MF CMakeFiles/vowel_counter.dir/vowel_counter.c.o.d -o CMakeFiles/vowel_counter.dir/vowel_counter.c.o -c /home/troy/c_projects/c_projects/vowel_counter/vowel_counter.c

CMakeFiles/vowel_counter.dir/vowel_counter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/vowel_counter.dir/vowel_counter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/troy/c_projects/c_projects/vowel_counter/vowel_counter.c > CMakeFiles/vowel_counter.dir/vowel_counter.c.i

CMakeFiles/vowel_counter.dir/vowel_counter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/vowel_counter.dir/vowel_counter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/troy/c_projects/c_projects/vowel_counter/vowel_counter.c -o CMakeFiles/vowel_counter.dir/vowel_counter.c.s

# Object files for target vowel_counter
vowel_counter_OBJECTS = \
"CMakeFiles/vowel_counter.dir/vowel_counter.c.o"

# External object files for target vowel_counter
vowel_counter_EXTERNAL_OBJECTS =

vowel_counter: CMakeFiles/vowel_counter.dir/vowel_counter.c.o
vowel_counter: CMakeFiles/vowel_counter.dir/build.make
vowel_counter: CMakeFiles/vowel_counter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/troy/c_projects/c_projects/vowel_counter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable vowel_counter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vowel_counter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vowel_counter.dir/build: vowel_counter
.PHONY : CMakeFiles/vowel_counter.dir/build

CMakeFiles/vowel_counter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vowel_counter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vowel_counter.dir/clean

CMakeFiles/vowel_counter.dir/depend:
	cd /home/troy/c_projects/c_projects/vowel_counter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/troy/c_projects/c_projects/vowel_counter /home/troy/c_projects/c_projects/vowel_counter /home/troy/c_projects/c_projects/vowel_counter/build /home/troy/c_projects/c_projects/vowel_counter/build /home/troy/c_projects/c_projects/vowel_counter/build/CMakeFiles/vowel_counter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vowel_counter.dir/depend
