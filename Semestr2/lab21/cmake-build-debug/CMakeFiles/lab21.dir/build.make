# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /var/lib/snapd/snap/clion/149/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /var/lib/snapd/snap/clion/149/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/maestro/Programing_Satsuki/Semestr2/lab21

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab21.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab21.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab21.dir/flags.make

CMakeFiles/lab21.dir/StaticLib/complex.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticLib/complex.c.o: ../StaticLib/complex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/lab21.dir/StaticLib/complex.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticLib/complex.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/complex.c

CMakeFiles/lab21.dir/StaticLib/complex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticLib/complex.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/complex.c > CMakeFiles/lab21.dir/StaticLib/complex.c.i

CMakeFiles/lab21.dir/StaticLib/complex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticLib/complex.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/complex.c -o CMakeFiles/lab21.dir/StaticLib/complex.c.s

CMakeFiles/lab21.dir/StaticLib/test_complex.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticLib/test_complex.c.o: ../StaticLib/test_complex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/lab21.dir/StaticLib/test_complex.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticLib/test_complex.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/test_complex.c

CMakeFiles/lab21.dir/StaticLib/test_complex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticLib/test_complex.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/test_complex.c > CMakeFiles/lab21.dir/StaticLib/test_complex.c.i

CMakeFiles/lab21.dir/StaticLib/test_complex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticLib/test_complex.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/test_complex.c -o CMakeFiles/lab21.dir/StaticLib/test_complex.c.s

CMakeFiles/lab21.dir/StaticLib/main.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticLib/main.c.o: ../StaticLib/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/lab21.dir/StaticLib/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticLib/main.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/main.c

CMakeFiles/lab21.dir/StaticLib/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticLib/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/main.c > CMakeFiles/lab21.dir/StaticLib/main.c.i

CMakeFiles/lab21.dir/StaticLib/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticLib/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/main.c -o CMakeFiles/lab21.dir/StaticLib/main.c.s

CMakeFiles/lab21.dir/StaticLib/lib.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticLib/lib.c.o: ../StaticLib/lib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/lab21.dir/StaticLib/lib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticLib/lib.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/lib.c

CMakeFiles/lab21.dir/StaticLib/lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticLib/lib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/lib.c > CMakeFiles/lab21.dir/StaticLib/lib.c.i

CMakeFiles/lab21.dir/StaticLib/lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticLib/lib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/lib.c -o CMakeFiles/lab21.dir/StaticLib/lib.c.s

CMakeFiles/lab21.dir/StaticLib/entity.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticLib/entity.c.o: ../StaticLib/entity.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/lab21.dir/StaticLib/entity.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticLib/entity.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/entity.c

CMakeFiles/lab21.dir/StaticLib/entity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticLib/entity.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/entity.c > CMakeFiles/lab21.dir/StaticLib/entity.c.i

CMakeFiles/lab21.dir/StaticLib/entity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticLib/entity.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticLib/entity.c -o CMakeFiles/lab21.dir/StaticLib/entity.c.s

CMakeFiles/lab21.dir/StaticProject/main.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticProject/main.c.o: ../StaticProject/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/lab21.dir/StaticProject/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticProject/main.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/main.c

CMakeFiles/lab21.dir/StaticProject/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticProject/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/main.c > CMakeFiles/lab21.dir/StaticProject/main.c.i

CMakeFiles/lab21.dir/StaticProject/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticProject/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/main.c -o CMakeFiles/lab21.dir/StaticProject/main.c.s

CMakeFiles/lab21.dir/StaticProject/lib.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticProject/lib.c.o: ../StaticProject/lib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/lab21.dir/StaticProject/lib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticProject/lib.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/lib.c

CMakeFiles/lab21.dir/StaticProject/lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticProject/lib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/lib.c > CMakeFiles/lab21.dir/StaticProject/lib.c.i

CMakeFiles/lab21.dir/StaticProject/lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticProject/lib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/lib.c -o CMakeFiles/lab21.dir/StaticProject/lib.c.s

CMakeFiles/lab21.dir/StaticProject/entity.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/StaticProject/entity.c.o: ../StaticProject/entity.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/lab21.dir/StaticProject/entity.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/StaticProject/entity.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/entity.c

CMakeFiles/lab21.dir/StaticProject/entity.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/StaticProject/entity.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/entity.c > CMakeFiles/lab21.dir/StaticProject/entity.c.i

CMakeFiles/lab21.dir/StaticProject/entity.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/StaticProject/entity.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/StaticProject/entity.c -o CMakeFiles/lab21.dir/StaticProject/entity.c.s

CMakeFiles/lab21.dir/ShareLib/main.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/ShareLib/main.c.o: ../ShareLib/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/lab21.dir/ShareLib/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/ShareLib/main.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/main.c

CMakeFiles/lab21.dir/ShareLib/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/ShareLib/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/main.c > CMakeFiles/lab21.dir/ShareLib/main.c.i

CMakeFiles/lab21.dir/ShareLib/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/ShareLib/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/main.c -o CMakeFiles/lab21.dir/ShareLib/main.c.s

CMakeFiles/lab21.dir/ShareLib/lib.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/ShareLib/lib.c.o: ../ShareLib/lib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/lab21.dir/ShareLib/lib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/ShareLib/lib.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/lib.c

CMakeFiles/lab21.dir/ShareLib/lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/ShareLib/lib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/lib.c > CMakeFiles/lab21.dir/ShareLib/lib.c.i

CMakeFiles/lab21.dir/ShareLib/lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/ShareLib/lib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/lib.c -o CMakeFiles/lab21.dir/ShareLib/lib.c.s

CMakeFiles/lab21.dir/ShareLib/list.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/ShareLib/list.c.o: ../ShareLib/list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/lab21.dir/ShareLib/list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/ShareLib/list.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/list.c

CMakeFiles/lab21.dir/ShareLib/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/ShareLib/list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/list.c > CMakeFiles/lab21.dir/ShareLib/list.c.i

CMakeFiles/lab21.dir/ShareLib/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/ShareLib/list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareLib/list.c -o CMakeFiles/lab21.dir/ShareLib/list.c.s

CMakeFiles/lab21.dir/ShareProject/main.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/ShareProject/main.c.o: ../ShareProject/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/lab21.dir/ShareProject/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/ShareProject/main.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/main.c

CMakeFiles/lab21.dir/ShareProject/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/ShareProject/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/main.c > CMakeFiles/lab21.dir/ShareProject/main.c.i

CMakeFiles/lab21.dir/ShareProject/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/ShareProject/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/main.c -o CMakeFiles/lab21.dir/ShareProject/main.c.s

CMakeFiles/lab21.dir/ShareProject/lib.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/ShareProject/lib.c.o: ../ShareProject/lib.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/lab21.dir/ShareProject/lib.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/ShareProject/lib.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/lib.c

CMakeFiles/lab21.dir/ShareProject/lib.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/ShareProject/lib.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/lib.c > CMakeFiles/lab21.dir/ShareProject/lib.c.i

CMakeFiles/lab21.dir/ShareProject/lib.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/ShareProject/lib.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/lib.c -o CMakeFiles/lab21.dir/ShareProject/lib.c.s

CMakeFiles/lab21.dir/ShareProject/list.c.o: CMakeFiles/lab21.dir/flags.make
CMakeFiles/lab21.dir/ShareProject/list.c.o: ../ShareProject/list.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/lab21.dir/ShareProject/list.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/lab21.dir/ShareProject/list.c.o -c /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/list.c

CMakeFiles/lab21.dir/ShareProject/list.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/lab21.dir/ShareProject/list.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/list.c > CMakeFiles/lab21.dir/ShareProject/list.c.i

CMakeFiles/lab21.dir/ShareProject/list.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/lab21.dir/ShareProject/list.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/maestro/Programing_Satsuki/Semestr2/lab21/ShareProject/list.c -o CMakeFiles/lab21.dir/ShareProject/list.c.s

# Object files for target lab21
lab21_OBJECTS = \
"CMakeFiles/lab21.dir/StaticLib/complex.c.o" \
"CMakeFiles/lab21.dir/StaticLib/test_complex.c.o" \
"CMakeFiles/lab21.dir/StaticLib/main.c.o" \
"CMakeFiles/lab21.dir/StaticLib/lib.c.o" \
"CMakeFiles/lab21.dir/StaticLib/entity.c.o" \
"CMakeFiles/lab21.dir/StaticProject/main.c.o" \
"CMakeFiles/lab21.dir/StaticProject/lib.c.o" \
"CMakeFiles/lab21.dir/StaticProject/entity.c.o" \
"CMakeFiles/lab21.dir/ShareLib/main.c.o" \
"CMakeFiles/lab21.dir/ShareLib/lib.c.o" \
"CMakeFiles/lab21.dir/ShareLib/list.c.o" \
"CMakeFiles/lab21.dir/ShareProject/main.c.o" \
"CMakeFiles/lab21.dir/ShareProject/lib.c.o" \
"CMakeFiles/lab21.dir/ShareProject/list.c.o"

# External object files for target lab21
lab21_EXTERNAL_OBJECTS =

lab21: CMakeFiles/lab21.dir/StaticLib/complex.c.o
lab21: CMakeFiles/lab21.dir/StaticLib/test_complex.c.o
lab21: CMakeFiles/lab21.dir/StaticLib/main.c.o
lab21: CMakeFiles/lab21.dir/StaticLib/lib.c.o
lab21: CMakeFiles/lab21.dir/StaticLib/entity.c.o
lab21: CMakeFiles/lab21.dir/StaticProject/main.c.o
lab21: CMakeFiles/lab21.dir/StaticProject/lib.c.o
lab21: CMakeFiles/lab21.dir/StaticProject/entity.c.o
lab21: CMakeFiles/lab21.dir/ShareLib/main.c.o
lab21: CMakeFiles/lab21.dir/ShareLib/lib.c.o
lab21: CMakeFiles/lab21.dir/ShareLib/list.c.o
lab21: CMakeFiles/lab21.dir/ShareProject/main.c.o
lab21: CMakeFiles/lab21.dir/ShareProject/lib.c.o
lab21: CMakeFiles/lab21.dir/ShareProject/list.c.o
lab21: CMakeFiles/lab21.dir/build.make
lab21: CMakeFiles/lab21.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Linking C executable lab21"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab21.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab21.dir/build: lab21

.PHONY : CMakeFiles/lab21.dir/build

CMakeFiles/lab21.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab21.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab21.dir/clean

CMakeFiles/lab21.dir/depend:
	cd /home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/maestro/Programing_Satsuki/Semestr2/lab21 /home/maestro/Programing_Satsuki/Semestr2/lab21 /home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug /home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug /home/maestro/Programing_Satsuki/Semestr2/lab21/cmake-build-debug/CMakeFiles/lab21.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab21.dir/depend

