# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pedrolucasp/Projetos/focus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pedrolucasp/Projetos/focus/install

# Utility rule file for i18n.

# Include the progress variables for this target.
include po/CMakeFiles/i18n.dir/progress.make

po/CMakeFiles/i18n:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrolucasp/Projetos/focus/install/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold messages.”

i18n: po/CMakeFiles/i18n
i18n: po/CMakeFiles/i18n.dir/build.make
.PHONY : i18n

# Rule to build all files generated by this target.
po/CMakeFiles/i18n.dir/build: i18n
.PHONY : po/CMakeFiles/i18n.dir/build

po/CMakeFiles/i18n.dir/clean:
	cd /home/pedrolucasp/Projetos/focus/install/po && $(CMAKE_COMMAND) -P CMakeFiles/i18n.dir/cmake_clean.cmake
.PHONY : po/CMakeFiles/i18n.dir/clean

po/CMakeFiles/i18n.dir/depend:
	cd /home/pedrolucasp/Projetos/focus/install && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pedrolucasp/Projetos/focus /home/pedrolucasp/Projetos/focus/po /home/pedrolucasp/Projetos/focus/install /home/pedrolucasp/Projetos/focus/install/po /home/pedrolucasp/Projetos/focus/install/po/CMakeFiles/i18n.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/CMakeFiles/i18n.dir/depend
