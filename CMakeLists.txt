cmake_minimum_required(VERSION 3.16)
project(untitled1)

set(CMAKE_CXX_STANDARD  17)
add_executable(untitled1 main.cpp Star.cpp Star.h)
find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

include_directories( ${OPENGL_INCLUDE_DIRS}  ${GLUT_INCLUDE_DIRS} )

target_link_libraries(untitled1 ${OPENGL_LIBRARIES} ${GLUT_LIBRARY} )



target_link_libraries(untitled1 sfml-graphics sfml-audio)