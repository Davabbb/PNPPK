# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.27

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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.27.8/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.27.8/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/david/CLionProjects/PNPPK/Task2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/david/CLionProjects/PNPPK/Task2/build

# Include any dependencies generated for this target.
include CMakeFiles/Task2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Task2.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Task2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Task2.dir/flags.make

CMakeFiles/Task2.dir/main.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/main.cpp.o: /Users/david/CLionProjects/PNPPK/Task2/main.cpp
CMakeFiles/Task2.dir/main.cpp.o: CMakeFiles/Task2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/david/CLionProjects/PNPPK/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Task2.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task2.dir/main.cpp.o -MF CMakeFiles/Task2.dir/main.cpp.o.d -o CMakeFiles/Task2.dir/main.cpp.o -c /Users/david/CLionProjects/PNPPK/Task2/main.cpp

CMakeFiles/Task2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task2.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/david/CLionProjects/PNPPK/Task2/main.cpp > CMakeFiles/Task2.dir/main.cpp.i

CMakeFiles/Task2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/david/CLionProjects/PNPPK/Task2/main.cpp -o CMakeFiles/Task2.dir/main.cpp.s

CMakeFiles/Task2.dir/test.cpp.o: CMakeFiles/Task2.dir/flags.make
CMakeFiles/Task2.dir/test.cpp.o: /Users/david/CLionProjects/PNPPK/Task2/test.cpp
CMakeFiles/Task2.dir/test.cpp.o: CMakeFiles/Task2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/david/CLionProjects/PNPPK/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Task2.dir/test.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Task2.dir/test.cpp.o -MF CMakeFiles/Task2.dir/test.cpp.o.d -o CMakeFiles/Task2.dir/test.cpp.o -c /Users/david/CLionProjects/PNPPK/Task2/test.cpp

CMakeFiles/Task2.dir/test.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Task2.dir/test.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/david/CLionProjects/PNPPK/Task2/test.cpp > CMakeFiles/Task2.dir/test.cpp.i

CMakeFiles/Task2.dir/test.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Task2.dir/test.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/david/CLionProjects/PNPPK/Task2/test.cpp -o CMakeFiles/Task2.dir/test.cpp.s

# Object files for target Task2
Task2_OBJECTS = \
"CMakeFiles/Task2.dir/main.cpp.o" \
"CMakeFiles/Task2.dir/test.cpp.o"

# External object files for target Task2
Task2_EXTERNAL_OBJECTS =

Task2: CMakeFiles/Task2.dir/main.cpp.o
Task2: CMakeFiles/Task2.dir/test.cpp.o
Task2: CMakeFiles/Task2.dir/build.make
Task2: /opt/homebrew/Cellar/cpputest/4.0/lib/libCppUTest.a
Task2: /opt/homebrew/Cellar/cpputest/4.0/lib/libCppUTestExt.a
Task2: CMakeFiles/Task2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/david/CLionProjects/PNPPK/Task2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Task2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Task2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Task2.dir/build: Task2
.PHONY : CMakeFiles/Task2.dir/build

CMakeFiles/Task2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Task2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Task2.dir/clean

CMakeFiles/Task2.dir/depend:
	cd /Users/david/CLionProjects/PNPPK/Task2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/david/CLionProjects/PNPPK/Task2 /Users/david/CLionProjects/PNPPK/Task2 /Users/david/CLionProjects/PNPPK/Task2/build /Users/david/CLionProjects/PNPPK/Task2/build /Users/david/CLionProjects/PNPPK/Task2/build/CMakeFiles/Task2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Task2.dir/depend

