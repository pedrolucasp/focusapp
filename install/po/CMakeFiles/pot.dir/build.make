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
CMAKE_SOURCE_DIR = /home/pedrolucasp/Documentos/Projetos/elementary/focus

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pedrolucasp/Documentos/Projetos/elementary/focus/install

# Utility rule file for pot.

# Include the progress variables for this target.
include po/CMakeFiles/pot.dir/progress.make

po/CMakeFiles/pot:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/pedrolucasp/Documentos/Projetos/elementary/focus/install/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold catalog.”

pot: po/CMakeFiles/pot
pot: po/CMakeFiles/pot.dir/build.make
	cd /home/pedrolucasp/Documentos/Projetos/elementary/focus/install/po && /usr/bin/xgettext -d focusapp -o /home/pedrolucasp/Documentos/Projetos/elementary/focus/po/focusapp.pot --keyword="_" --keyword="N_" --from-code=UTF-8 -LC# /home/pedrolucasp/Documentos/Projetos/elementary/focus/po/../src/focusapp.vala
.PHONY : pot

# Rule to build all files generated by this target.
po/CMakeFiles/pot.dir/build: pot
.PHONY : po/CMakeFiles/pot.dir/build

po/CMakeFiles/pot.dir/clean:
	cd /home/pedrolucasp/Documentos/Projetos/elementary/focus/install/po && $(CMAKE_COMMAND) -P CMakeFiles/pot.dir/cmake_clean.cmake
.PHONY : po/CMakeFiles/pot.dir/clean

po/CMakeFiles/pot.dir/depend:
	cd /home/pedrolucasp/Documentos/Projetos/elementary/focus/install && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pedrolucasp/Documentos/Projetos/elementary/focus /home/pedrolucasp/Documentos/Projetos/elementary/focus/po /home/pedrolucasp/Documentos/Projetos/elementary/focus/install /home/pedrolucasp/Documentos/Projetos/elementary/focus/install/po /home/pedrolucasp/Documentos/Projetos/elementary/focus/install/po/CMakeFiles/pot.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : po/CMakeFiles/pot.dir/depend

