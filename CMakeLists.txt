# CMake entry point
cmake_minimum_required (VERSION 3.0)
project (Tutorials)

set(CMAKE_CXX_STANDARD 11)

find_package(PkgConfig)

find_package(OpenGL REQUIRED)
find_package(GLEW REQUIRED)
find_package(glfw3 3.3 REQUIRED)

set(ALL_LIBS
	${OPENGL_LIBRARY}
)

# Tutorial 1
add_executable(tutorial01_first_window 
	tutorial01_first_window/tutorial01.cpp
)

# Tutorial 2 - helloworld
add_executable(tutorial02_helloworld
	tutorial02_helloworld/tutorial02.cpp
)

# Tutorial 2 - rectangle
add_executable(tutorial02_reactangle01
	tutorial02_reactangle/rectangle01.cpp
)

# Tutorial  Exercise
add_executable(exercise
	exercise/drawRectangle.cpp
)


target_link_libraries(tutorial01_first_window ${ALL_LIBRARIES} OpenGL::GL OpenGL::GLU OpenGL::OpenGL OpenGL::EGL GLEW::glew glfw)
target_link_libraries(tutorial02_helloworld ${ALL_LIBRARIES} OpenGL::GL OpenGL::GLU OpenGL::OpenGL OpenGL::EGL GLEW::glew glfw)
target_link_libraries(tutorial02_reactangle01 ${ALL_LIBRARIES} OpenGL::GL OpenGL::GLU OpenGL::OpenGL OpenGL::EGL GLEW::glew glfw)
target_link_libraries(exercise ${ALL_LIBRARIES} OpenGL::GL OpenGL::GLU OpenGL::OpenGL OpenGL::EGL GLEW::glew glfw)


