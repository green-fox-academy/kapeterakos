# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2018.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Day_02.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Day_02.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Day_02.dir/flags.make

CMakeFiles/Day_02.dir/main.cpp.obj: CMakeFiles/Day_02.dir/flags.make
CMakeFiles/Day_02.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Day_02.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Day_02.dir\main.cpp.obj -c C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\main.cpp

CMakeFiles/Day_02.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day_02.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\main.cpp > CMakeFiles\Day_02.dir\main.cpp.i

CMakeFiles/Day_02.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day_02.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\main.cpp -o CMakeFiles\Day_02.dir\main.cpp.s

# Object files for target Day_02
Day_02_OBJECTS = \
"CMakeFiles/Day_02.dir/main.cpp.obj"

# External object files for target Day_02
Day_02_EXTERNAL_OBJECTS =

Day_02.exe: CMakeFiles/Day_02.dir/main.cpp.obj
Day_02.exe: CMakeFiles/Day_02.dir/build.make
Day_02.exe: CMakeFiles/Day_02.dir/linklibs.rsp
Day_02.exe: CMakeFiles/Day_02.dir/objects1.rsp
Day_02.exe: CMakeFiles/Day_02.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Day_02.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Day_02.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Day_02.dir/build: Day_02.exe

.PHONY : CMakeFiles/Day_02.dir/build

CMakeFiles/Day_02.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Day_02.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Day_02.dir/clean

CMakeFiles/Day_02.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02 C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02 C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\cmake-build-debug C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\cmake-build-debug C:\Users\Akos\Greenfox\kapeterakos\Week-01\Day-02\cmake-build-debug\CMakeFiles\Day_02.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Day_02.dir/depend

