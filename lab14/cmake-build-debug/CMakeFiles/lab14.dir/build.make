# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/139/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/139/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maestro/Programing_Satsuki/lab14

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maestro/Programing_Satsuki/lab14/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab14.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab14.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab14.dir/flags.make

CMakeFiles/lab14.dir/ex2.c.o: CMakeFiles/lab14.dir/flags.make
CMakeFiles/lab14.dir/ex2.c.o: ../ex2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/lab14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab14.dir/ex2.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab14.dir/ex2.c.o   -c /home/maestro/Programing_Satsuki/lab14/ex2.c

CMakeFiles/lab14.dir/ex2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab14.dir/ex2.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/lab14/ex2.c > CMakeFiles/lab14.dir/ex2.c.i

CMakeFiles/lab14.dir/ex2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab14.dir/ex2.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/lab14/ex2.c -o CMakeFiles/lab14.dir/ex2.c.s

CMakeFiles/lab14.dir/ex5.c.o: CMakeFiles/lab14.dir/flags.make
CMakeFiles/lab14.dir/ex5.c.o: ../ex5.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/lab14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab14.dir/ex5.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab14.dir/ex5.c.o   -c /home/maestro/Programing_Satsuki/lab14/ex5.c

CMakeFiles/lab14.dir/ex5.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab14.dir/ex5.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/lab14/ex5.c > CMakeFiles/lab14.dir/ex5.c.i

CMakeFiles/lab14.dir/ex5.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab14.dir/ex5.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/lab14/ex5.c -o CMakeFiles/lab14.dir/ex5.c.s

CMakeFiles/lab14.dir/ex6.c.o: CMakeFiles/lab14.dir/flags.make
CMakeFiles/lab14.dir/ex6.c.o: ../ex6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/lab14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/lab14.dir/ex6.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab14.dir/ex6.c.o   -c /home/maestro/Programing_Satsuki/lab14/ex6.c

CMakeFiles/lab14.dir/ex6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab14.dir/ex6.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/lab14/ex6.c > CMakeFiles/lab14.dir/ex6.c.i

CMakeFiles/lab14.dir/ex6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab14.dir/ex6.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/lab14/ex6.c -o CMakeFiles/lab14.dir/ex6.c.s

# Object files for target lab14
lab14_OBJECTS = \
"CMakeFiles/lab14.dir/ex2.c.o" \
"CMakeFiles/lab14.dir/ex5.c.o" \
"CMakeFiles/lab14.dir/ex6.c.o"

# External object files for target lab14
lab14_EXTERNAL_OBJECTS =

lab14: CMakeFiles/lab14.dir/ex2.c.o
lab14: CMakeFiles/lab14.dir/ex5.c.o
lab14: CMakeFiles/lab14.dir/ex6.c.o
lab14: CMakeFiles/lab14.dir/build.make
lab14: CMakeFiles/lab14.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maestro/Programing_Satsuki/lab14/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking C executable lab14"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab14.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab14.dir/build: lab14

.PHONY : CMakeFiles/lab14.dir/build

CMakeFiles/lab14.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab14.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab14.dir/clean

CMakeFiles/lab14.dir/depend:
	cd /home/maestro/Programing_Satsuki/lab14/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maestro/Programing_Satsuki/lab14 /home/maestro/Programing_Satsuki/lab14 /home/maestro/Programing_Satsuki/lab14/cmake-build-debug /home/maestro/Programing_Satsuki/lab14/cmake-build-debug /home/maestro/Programing_Satsuki/lab14/cmake-build-debug/CMakeFiles/lab14.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab14.dir/depend

