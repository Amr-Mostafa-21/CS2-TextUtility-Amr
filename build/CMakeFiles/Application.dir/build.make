# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /opt/homebrew/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build

# Include any dependencies generated for this target.
include CMakeFiles/Application.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/Application.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/Application.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Application.dir/flags.make

CMakeFiles/Application.dir/codegen:
.PHONY : CMakeFiles/Application.dir/codegen

CMakeFiles/Application.dir/text_utility.cpp.o: CMakeFiles/Application.dir/flags.make
CMakeFiles/Application.dir/text_utility.cpp.o: /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/text_utility.cpp
CMakeFiles/Application.dir/text_utility.cpp.o: CMakeFiles/Application.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Application.dir/text_utility.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Application.dir/text_utility.cpp.o -MF CMakeFiles/Application.dir/text_utility.cpp.o.d -o CMakeFiles/Application.dir/text_utility.cpp.o -c /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/text_utility.cpp

CMakeFiles/Application.dir/text_utility.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Application.dir/text_utility.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/text_utility.cpp > CMakeFiles/Application.dir/text_utility.cpp.i

CMakeFiles/Application.dir/text_utility.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Application.dir/text_utility.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/text_utility.cpp -o CMakeFiles/Application.dir/text_utility.cpp.s

CMakeFiles/Application.dir/main.cpp.o: CMakeFiles/Application.dir/flags.make
CMakeFiles/Application.dir/main.cpp.o: /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/main.cpp
CMakeFiles/Application.dir/main.cpp.o: CMakeFiles/Application.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Application.dir/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/Application.dir/main.cpp.o -MF CMakeFiles/Application.dir/main.cpp.o.d -o CMakeFiles/Application.dir/main.cpp.o -c /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/main.cpp

CMakeFiles/Application.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/Application.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/main.cpp > CMakeFiles/Application.dir/main.cpp.i

CMakeFiles/Application.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/Application.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/main.cpp -o CMakeFiles/Application.dir/main.cpp.s

# Object files for target Application
Application_OBJECTS = \
"CMakeFiles/Application.dir/text_utility.cpp.o" \
"CMakeFiles/Application.dir/main.cpp.o"

# External object files for target Application
Application_EXTERNAL_OBJECTS =

Application: CMakeFiles/Application.dir/text_utility.cpp.o
Application: CMakeFiles/Application.dir/main.cpp.o
Application: CMakeFiles/Application.dir/build.make
Application: CMakeFiles/Application.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Application"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Application.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Application.dir/build: Application
.PHONY : CMakeFiles/Application.dir/build

CMakeFiles/Application.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Application.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Application.dir/clean

CMakeFiles/Application.dir/depend:
	cd /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build /Users/ahmedabdelkader/Desktop/CS2-TextUtility-Amr/build/CMakeFiles/Application.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/Application.dir/depend

