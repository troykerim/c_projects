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
CMAKE_SOURCE_DIR = /home/troy/c_projects/c_projects/is_prime

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/troy/c_projects/c_projects/is_prime/build

# Include any dependencies generated for this target.
include CMakeFiles/prime_checker.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/prime_checker.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/prime_checker.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/prime_checker.dir/flags.make

CMakeFiles/prime_checker.dir/prime_checker.c.o: CMakeFiles/prime_checker.dir/flags.make
CMakeFiles/prime_checker.dir/prime_checker.c.o: ../prime_checker.c
CMakeFiles/prime_checker.dir/prime_checker.c.o: CMakeFiles/prime_checker.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/troy/c_projects/c_projects/is_prime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/prime_checker.dir/prime_checker.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/prime_checker.dir/prime_checker.c.o -MF CMakeFiles/prime_checker.dir/prime_checker.c.o.d -o CMakeFiles/prime_checker.dir/prime_checker.c.o -c /home/troy/c_projects/c_projects/is_prime/prime_checker.c

CMakeFiles/prime_checker.dir/prime_checker.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/prime_checker.dir/prime_checker.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/troy/c_projects/c_projects/is_prime/prime_checker.c > CMakeFiles/prime_checker.dir/prime_checker.c.i

CMakeFiles/prime_checker.dir/prime_checker.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/prime_checker.dir/prime_checker.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/troy/c_projects/c_projects/is_prime/prime_checker.c -o CMakeFiles/prime_checker.dir/prime_checker.c.s

# Object files for target prime_checker
prime_checker_OBJECTS = \
"CMakeFiles/prime_checker.dir/prime_checker.c.o"

# External object files for target prime_checker
prime_checker_EXTERNAL_OBJECTS =

prime_checker: CMakeFiles/prime_checker.dir/prime_checker.c.o
prime_checker: CMakeFiles/prime_checker.dir/build.make
prime_checker: CMakeFiles/prime_checker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/troy/c_projects/c_projects/is_prime/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable prime_checker"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/prime_checker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/prime_checker.dir/build: prime_checker
.PHONY : CMakeFiles/prime_checker.dir/build

CMakeFiles/prime_checker.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/prime_checker.dir/cmake_clean.cmake
.PHONY : CMakeFiles/prime_checker.dir/clean

CMakeFiles/prime_checker.dir/depend:
	cd /home/troy/c_projects/c_projects/is_prime/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/troy/c_projects/c_projects/is_prime /home/troy/c_projects/c_projects/is_prime /home/troy/c_projects/c_projects/is_prime/build /home/troy/c_projects/c_projects/is_prime/build /home/troy/c_projects/c_projects/is_prime/build/CMakeFiles/prime_checker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/prime_checker.dir/depend

