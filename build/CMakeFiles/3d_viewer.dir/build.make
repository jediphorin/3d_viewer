# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build

# Include any dependencies generated for this target.
include CMakeFiles/3d_viewer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/3d_viewer.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/3d_viewer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/3d_viewer.dir/flags.make

3d_viewer_autogen/timestamp: /usr/lib/qt6/libexec/moc
3d_viewer_autogen/timestamp: /usr/lib/qt6/libexec/uic
3d_viewer_autogen/timestamp: CMakeFiles/3d_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target 3d_viewer"
	/usr/bin/cmake -E cmake_autogen /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles/3d_viewer_autogen.dir/AutogenInfo.json Debug
	/usr/bin/cmake -E touch /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/timestamp

3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp: /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/resources/resource.qrc
3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp: CMakeFiles/3d_viewer_autogen.dir/AutoRcc_resource_3YJK5W5UP7_Info.json
3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp: /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/resources/icon.png
3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp: /usr/lib/qt6/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic RCC for resources/resource.qrc"
	/usr/bin/cmake -E cmake_autorcc /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles/3d_viewer_autogen.dir/AutoRcc_resource_3YJK5W5UP7_Info.json Debug

CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o: CMakeFiles/3d_viewer.dir/flags.make
CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o: 3d_viewer_autogen/mocs_compilation.cpp
CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o: CMakeFiles/3d_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o -MF CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o -c /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/mocs_compilation.cpp

CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/mocs_compilation.cpp > CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.i

CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/mocs_compilation.cpp -o CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.s

CMakeFiles/3d_viewer.dir/gui/main.cpp.o: CMakeFiles/3d_viewer.dir/flags.make
CMakeFiles/3d_viewer.dir/gui/main.cpp.o: /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/main.cpp
CMakeFiles/3d_viewer.dir/gui/main.cpp.o: CMakeFiles/3d_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/3d_viewer.dir/gui/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3d_viewer.dir/gui/main.cpp.o -MF CMakeFiles/3d_viewer.dir/gui/main.cpp.o.d -o CMakeFiles/3d_viewer.dir/gui/main.cpp.o -c /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/main.cpp

CMakeFiles/3d_viewer.dir/gui/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/3d_viewer.dir/gui/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/main.cpp > CMakeFiles/3d_viewer.dir/gui/main.cpp.i

CMakeFiles/3d_viewer.dir/gui/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/3d_viewer.dir/gui/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/main.cpp -o CMakeFiles/3d_viewer.dir/gui/main.cpp.s

CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o: CMakeFiles/3d_viewer.dir/flags.make
CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o: /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/viewer.cpp
CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o: CMakeFiles/3d_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o -MF CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o.d -o CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o -c /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/viewer.cpp

CMakeFiles/3d_viewer.dir/gui/viewer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/3d_viewer.dir/gui/viewer.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/viewer.cpp > CMakeFiles/3d_viewer.dir/gui/viewer.cpp.i

CMakeFiles/3d_viewer.dir/gui/viewer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/3d_viewer.dir/gui/viewer.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/viewer.cpp -o CMakeFiles/3d_viewer.dir/gui/viewer.cpp.s

CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o: CMakeFiles/3d_viewer.dir/flags.make
CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o: /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/glwidget.cpp
CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o: CMakeFiles/3d_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o -MF CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o.d -o CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o -c /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/glwidget.cpp

CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/glwidget.cpp > CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.i

CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/gui/glwidget.cpp -o CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.s

CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o: CMakeFiles/3d_viewer.dir/flags.make
CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o: 3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp
CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o: CMakeFiles/3d_viewer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o -MF CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o.d -o CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o -c /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp

CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp > CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.i

CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp -o CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.s

# Object files for target 3d_viewer
3d_viewer_OBJECTS = \
"CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/3d_viewer.dir/gui/main.cpp.o" \
"CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o" \
"CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o" \
"CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o"

# External object files for target 3d_viewer
3d_viewer_EXTERNAL_OBJECTS =

3d_viewer: CMakeFiles/3d_viewer.dir/3d_viewer_autogen/mocs_compilation.cpp.o
3d_viewer: CMakeFiles/3d_viewer.dir/gui/main.cpp.o
3d_viewer: CMakeFiles/3d_viewer.dir/gui/viewer.cpp.o
3d_viewer: CMakeFiles/3d_viewer.dir/gui/glwidget.cpp.o
3d_viewer: CMakeFiles/3d_viewer.dir/3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp.o
3d_viewer: CMakeFiles/3d_viewer.dir/build.make
3d_viewer: /usr/lib/x86_64-linux-gnu/libQt6OpenGLWidgets.so.6.4.2
3d_viewer: /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src/3d_viewer.a
3d_viewer: /usr/lib/x86_64-linux-gnu/libQt6Widgets.so.6.4.2
3d_viewer: /usr/lib/x86_64-linux-gnu/libQt6OpenGL.so.6.4.2
3d_viewer: /usr/lib/x86_64-linux-gnu/libQt6Gui.so.6.4.2
3d_viewer: /usr/lib/x86_64-linux-gnu/libQt6Core.so.6.4.2
3d_viewer: /usr/lib/x86_64-linux-gnu/libGLX.so
3d_viewer: /usr/lib/x86_64-linux-gnu/libOpenGL.so
3d_viewer: CMakeFiles/3d_viewer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable 3d_viewer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/3d_viewer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/3d_viewer.dir/build: 3d_viewer
.PHONY : CMakeFiles/3d_viewer.dir/build

CMakeFiles/3d_viewer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/3d_viewer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/3d_viewer.dir/clean

CMakeFiles/3d_viewer.dir/depend: 3d_viewer_autogen/3YJK5W5UP7/qrc_resource.cpp
CMakeFiles/3d_viewer.dir/depend: 3d_viewer_autogen/timestamp
	cd /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/src /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build /home/jediphorin/code/temp/github/C8_3DViewer_v1.0-1/build/CMakeFiles/3d_viewer.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/3d_viewer.dir/depend

