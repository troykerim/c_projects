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
CMAKE_SOURCE_DIR = /home/troy/c_projects/c_projects/temperature_converter

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/troy/c_projects/c_projects/temperature_converter/build

# Include any dependencies generated for this target.
include CMakeFiles/temp_converter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/temp_converter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/temp_converter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/temp_converter.dir/flags.make

CMakeFiles/temp_converter.dir/temp_converter.c.o: CMakeFiles/temp_converter.dir/flags.make
CMakeFiles/temp_converter.dir/temp_converter.c.o: ../temp_converter.c
CMakeFiles/temp_converter.dir/temp_converter.c.o: CMakeFiles/temp_converter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/troy/c_projects/c_projects/temperature_converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/temp_converter.dir/temp_converter.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/temp_converter.dir/temp_converter.c.o -MF CMakeFiles/temp_converter.dir/temp_converter.c.o.d -o CMakeFiles/temp_converter.dir/temp_converter.c.o -c /home/troy/c_projects/c_projects/temperature_converter/temp_converter.c

CMakeFiles/temp_converter.dir/temp_converter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/temp_converter.dir/temp_converter.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/troy/c_projects/c_projects/temperature_converter/temp_converter.c > CMakeFiles/temp_converter.dir/temp_converter.c.i

CMakeFiles/temp_converter.dir/temp_converter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/temp_converter.dir/temp_converter.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/troy/c_projects/c_projects/temperature_converter/temp_converter.c -o CMakeFiles/temp_converter.dir/temp_converter.c.s

# Object files for target temp_converter
temp_converter_OBJECTS = \
"CMakeFiles/temp_converter.dir/temp_converter.c.o"

# External object files for target temp_converter
temp_converter_EXTERNAL_OBJECTS =

temp_converter: CMakeFiles/temp_converter.dir/temp_converter.c.o
temp_converter: CMakeFiles/temp_converter.dir/build.make
temp_converter: CMakeFiles/temp_converter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/troy/c_projects/c_projects/temperature_converter/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable temp_converter"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/temp_converter.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/temp_converter.dir/build: temp_converter
.PHONY : CMakeFiles/temp_converter.dir/build

CMakeFiles/temp_converter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/temp_converter.dir/cmake_clean.cmake
.PHONY : CMakeFiles/temp_converter.dir/clean

CMakeFiles/temp_converter.dir/depend:
	cd /home/troy/c_projects/c_projects/temperature_converter/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/troy/c_projects/c_projects/temperature_converter /home/troy/c_projects/c_projects/temperature_converter /home/troy/c_projects/c_projects/temperature_converter/build /home/troy/c_projects/c_projects/temperature_converter/build /home/troy/c_projects/c_projects/temperature_converter/build/CMakeFiles/temp_converter.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/temp_converter.dir/depend

