# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\JetBrains\CLion 2017.1.3\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/PROBLEMA_7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/PROBLEMA_7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/PROBLEMA_7.dir/flags.make

CMakeFiles/PROBLEMA_7.dir/main.c.obj: CMakeFiles/PROBLEMA_7.dir/flags.make
CMakeFiles/PROBLEMA_7.dir/main.c.obj: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/PROBLEMA_7.dir/main.c.obj"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\PROBLEMA_7.dir\main.c.obj   -c C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\main.c

CMakeFiles/PROBLEMA_7.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/PROBLEMA_7.dir/main.c.i"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\main.c > CMakeFiles\PROBLEMA_7.dir\main.c.i

CMakeFiles/PROBLEMA_7.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/PROBLEMA_7.dir/main.c.s"
	C:\PROGRA~2\CODEBL~1\MinGW\bin\gcc.exe  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\main.c -o CMakeFiles\PROBLEMA_7.dir\main.c.s

CMakeFiles/PROBLEMA_7.dir/main.c.obj.requires:

.PHONY : CMakeFiles/PROBLEMA_7.dir/main.c.obj.requires

CMakeFiles/PROBLEMA_7.dir/main.c.obj.provides: CMakeFiles/PROBLEMA_7.dir/main.c.obj.requires
	$(MAKE) -f CMakeFiles\PROBLEMA_7.dir\build.make CMakeFiles/PROBLEMA_7.dir/main.c.obj.provides.build
.PHONY : CMakeFiles/PROBLEMA_7.dir/main.c.obj.provides

CMakeFiles/PROBLEMA_7.dir/main.c.obj.provides.build: CMakeFiles/PROBLEMA_7.dir/main.c.obj


# Object files for target PROBLEMA_7
PROBLEMA_7_OBJECTS = \
"CMakeFiles/PROBLEMA_7.dir/main.c.obj"

# External object files for target PROBLEMA_7
PROBLEMA_7_EXTERNAL_OBJECTS =

PROBLEMA_7.exe: CMakeFiles/PROBLEMA_7.dir/main.c.obj
PROBLEMA_7.exe: CMakeFiles/PROBLEMA_7.dir/build.make
PROBLEMA_7.exe: CMakeFiles/PROBLEMA_7.dir/linklibs.rsp
PROBLEMA_7.exe: CMakeFiles/PROBLEMA_7.dir/objects1.rsp
PROBLEMA_7.exe: CMakeFiles/PROBLEMA_7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable PROBLEMA_7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\PROBLEMA_7.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/PROBLEMA_7.dir/build: PROBLEMA_7.exe

.PHONY : CMakeFiles/PROBLEMA_7.dir/build

CMakeFiles/PROBLEMA_7.dir/requires: CMakeFiles/PROBLEMA_7.dir/main.c.obj.requires

.PHONY : CMakeFiles/PROBLEMA_7.dir/requires

CMakeFiles/PROBLEMA_7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\PROBLEMA_7.dir\cmake_clean.cmake
.PHONY : CMakeFiles/PROBLEMA_7.dir/clean

CMakeFiles/PROBLEMA_7.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7 C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7 C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\cmake-build-debug C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\cmake-build-debug C:\Users\Peanutt\Desktop\CLion\Tema_ATP\PROBLEMA_7\cmake-build-debug\CMakeFiles\PROBLEMA_7.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/PROBLEMA_7.dir/depend

