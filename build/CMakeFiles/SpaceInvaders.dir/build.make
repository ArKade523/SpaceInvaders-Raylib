# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.25.2/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.25.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kadeangell/Documents/Raylib

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kadeangell/Documents/Raylib/build

# Include any dependencies generated for this target.
include CMakeFiles/SpaceInvaders.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SpaceInvaders.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SpaceInvaders.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SpaceInvaders.dir/flags.make

CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o: /Users/kadeangell/Documents/Raylib/sources/aliens.cpp
CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o: CMakeFiles/SpaceInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kadeangell/Documents/Raylib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o -MF CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o.d -o CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o -c /Users/kadeangell/Documents/Raylib/sources/aliens.cpp

CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kadeangell/Documents/Raylib/sources/aliens.cpp > CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.i

CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kadeangell/Documents/Raylib/sources/aliens.cpp -o CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.s

CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o: /Users/kadeangell/Documents/Raylib/sources/globals.cpp
CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o: CMakeFiles/SpaceInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kadeangell/Documents/Raylib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o -MF CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o.d -o CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o -c /Users/kadeangell/Documents/Raylib/sources/globals.cpp

CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kadeangell/Documents/Raylib/sources/globals.cpp > CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.i

CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kadeangell/Documents/Raylib/sources/globals.cpp -o CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.s

CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o: /Users/kadeangell/Documents/Raylib/sources/main.cpp
CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o: CMakeFiles/SpaceInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kadeangell/Documents/Raylib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o -MF CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o.d -o CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o -c /Users/kadeangell/Documents/Raylib/sources/main.cpp

CMakeFiles/SpaceInvaders.dir/sources/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/sources/main.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kadeangell/Documents/Raylib/sources/main.cpp > CMakeFiles/SpaceInvaders.dir/sources/main.cpp.i

CMakeFiles/SpaceInvaders.dir/sources/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/sources/main.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kadeangell/Documents/Raylib/sources/main.cpp -o CMakeFiles/SpaceInvaders.dir/sources/main.cpp.s

CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o: CMakeFiles/SpaceInvaders.dir/flags.make
CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o: /Users/kadeangell/Documents/Raylib/sources/projectiles.cpp
CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o: CMakeFiles/SpaceInvaders.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kadeangell/Documents/Raylib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o -MF CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o.d -o CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o -c /Users/kadeangell/Documents/Raylib/sources/projectiles.cpp

CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kadeangell/Documents/Raylib/sources/projectiles.cpp > CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.i

CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kadeangell/Documents/Raylib/sources/projectiles.cpp -o CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.s

# Object files for target SpaceInvaders
SpaceInvaders_OBJECTS = \
"CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o" \
"CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o" \
"CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o" \
"CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o"

# External object files for target SpaceInvaders
SpaceInvaders_EXTERNAL_OBJECTS =

SpaceInvaders: CMakeFiles/SpaceInvaders.dir/sources/aliens.cpp.o
SpaceInvaders: CMakeFiles/SpaceInvaders.dir/sources/globals.cpp.o
SpaceInvaders: CMakeFiles/SpaceInvaders.dir/sources/main.cpp.o
SpaceInvaders: CMakeFiles/SpaceInvaders.dir/sources/projectiles.cpp.o
SpaceInvaders: CMakeFiles/SpaceInvaders.dir/build.make
SpaceInvaders: /usr/local/lib/libraylib.dylib
SpaceInvaders: CMakeFiles/SpaceInvaders.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kadeangell/Documents/Raylib/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable SpaceInvaders"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SpaceInvaders.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SpaceInvaders.dir/build: SpaceInvaders
.PHONY : CMakeFiles/SpaceInvaders.dir/build

CMakeFiles/SpaceInvaders.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SpaceInvaders.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SpaceInvaders.dir/clean

CMakeFiles/SpaceInvaders.dir/depend:
	cd /Users/kadeangell/Documents/Raylib/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kadeangell/Documents/Raylib /Users/kadeangell/Documents/Raylib /Users/kadeangell/Documents/Raylib/build /Users/kadeangell/Documents/Raylib/build /Users/kadeangell/Documents/Raylib/build/CMakeFiles/SpaceInvaders.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SpaceInvaders.dir/depend

