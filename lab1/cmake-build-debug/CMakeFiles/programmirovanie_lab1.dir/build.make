# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/nikitaivanov/Desktop/прога 2 сем/lab1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/programmirovanie_lab1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/programmirovanie_lab1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/programmirovanie_lab1.dir/flags.make

CMakeFiles/programmirovanie_lab1.dir/main.cpp.o: CMakeFiles/programmirovanie_lab1.dir/flags.make
CMakeFiles/programmirovanie_lab1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/programmirovanie_lab1.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/programmirovanie_lab1.dir/main.cpp.o -c "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/main.cpp"

CMakeFiles/programmirovanie_lab1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/programmirovanie_lab1.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/main.cpp" > CMakeFiles/programmirovanie_lab1.dir/main.cpp.i

CMakeFiles/programmirovanie_lab1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/programmirovanie_lab1.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/main.cpp" -o CMakeFiles/programmirovanie_lab1.dir/main.cpp.s

CMakeFiles/programmirovanie_lab1.dir/header.cpp.o: CMakeFiles/programmirovanie_lab1.dir/flags.make
CMakeFiles/programmirovanie_lab1.dir/header.cpp.o: ../header.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/programmirovanie_lab1.dir/header.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/programmirovanie_lab1.dir/header.cpp.o -c "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/header.cpp"

CMakeFiles/programmirovanie_lab1.dir/header.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/programmirovanie_lab1.dir/header.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/header.cpp" > CMakeFiles/programmirovanie_lab1.dir/header.cpp.i

CMakeFiles/programmirovanie_lab1.dir/header.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/programmirovanie_lab1.dir/header.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/header.cpp" -o CMakeFiles/programmirovanie_lab1.dir/header.cpp.s

# Object files for target programmirovanie_lab1
programmirovanie_lab1_OBJECTS = \
"CMakeFiles/programmirovanie_lab1.dir/main.cpp.o" \
"CMakeFiles/programmirovanie_lab1.dir/header.cpp.o"

# External object files for target programmirovanie_lab1
programmirovanie_lab1_EXTERNAL_OBJECTS =

programmirovanie_lab1: CMakeFiles/programmirovanie_lab1.dir/main.cpp.o
programmirovanie_lab1: CMakeFiles/programmirovanie_lab1.dir/header.cpp.o
programmirovanie_lab1: CMakeFiles/programmirovanie_lab1.dir/build.make
programmirovanie_lab1: CMakeFiles/programmirovanie_lab1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable programmirovanie_lab1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/programmirovanie_lab1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/programmirovanie_lab1.dir/build: programmirovanie_lab1
.PHONY : CMakeFiles/programmirovanie_lab1.dir/build

CMakeFiles/programmirovanie_lab1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/programmirovanie_lab1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/programmirovanie_lab1.dir/clean

CMakeFiles/programmirovanie_lab1.dir/depend:
	cd "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/nikitaivanov/Desktop/прога 2 сем/lab1" "/Users/nikitaivanov/Desktop/прога 2 сем/lab1" "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug" "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug" "/Users/nikitaivanov/Desktop/прога 2 сем/lab1/cmake-build-debug/CMakeFiles/programmirovanie_lab1.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/programmirovanie_lab1.dir/depend

