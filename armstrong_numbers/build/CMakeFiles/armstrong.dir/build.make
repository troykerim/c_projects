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
CMAKE_SOURCE_DIR = /home/troy/c_projects/c_projects/armstrong_numbers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/troy/c_projects/c_projects/armstrong_numbers/build

# Include any dependencies generated for this target.
include CMakeFiles/armstrong.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/armstrong.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/armstrong.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/armstrong.dir/flags.make

CMakeFiles/armstrong.dir/armstrong.c.o: CMakeFiles/armstrong.dir/flags.make
CMakeFiles/armstrong.dir/armstrong.c.o: ../armstrong.c
CMakeFiles/armstrong.dir/armstrong.c.o: CMakeFiles/armstrong.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/troy/c_projects/c_projects/armstrong_numbers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/armstrong.dir/armstrong.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/armstrong.dir/armstrong.c.o -MF CMakeFiles/armstrong.dir/armstrong.c.o.d -o CMakeFiles/armstrong.dir/armstrong.c.o -c /home/troy/c_projects/c_projects/armstrong_numbers/armstrong.c

CMakeFiles/armstrong.dir/armstrong.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/armstrong.dir/armstrong.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/troy/c_projects/c_projects/armstrong_numbers/armstrong.c > CMakeFiles/armstrong.dir/armstrong.c.i

CMakeFiles/armstrong.dir/armstrong.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/armstrong.dir/armstrong.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/troy/c_projects/c_projects/armstrong_numbers/armstrong.c -o CMakeFiles/armstrong.dir/armstrong.c.s

# Object files for target armstrong
armstrong_OBJECTS = \
"CMakeFiles/armstrong.dir/armstrong.c.o"

# External object files for target armstrong
armstrong_EXTERNAL_OBJECTS =

armstrong: CMakeFiles/armstrong.dir/armstrong.c.o
armstrong: CMakeFiles/armstrong.dir/build.make
armstrong: CMakeFiles/armstrong.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/troy/c_projects/c_projects/armstrong_numbers/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable armstrong"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/armstrong.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/armstrong.dir/build: armstrong
.PHONY : CMakeFiles/armstrong.dir/build

CMakeFiles/armstrong.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/armstrong.dir/cmake_clean.cmake
.PHONY : CMakeFiles/armstrong.dir/clean

CMakeFiles/armstrong.dir/depend:
	cd /home/troy/c_projects/c_projects/armstrong_numbers/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/troy/c_projects/c_projects/armstrong_numbers /home/troy/c_projects/c_projects/armstrong_numbers /home/troy/c_projects/c_projects/armstrong_numbers/build /home/troy/c_projects/c_projects/armstrong_numbers/build /home/troy/c_projects/c_projects/armstrong_numbers/build/CMakeFiles/armstrong.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/armstrong.dir/depend

