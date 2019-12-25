cmake_minimum_required(VERSION 3.15)
project(vnengine)

set(CMAKE_CXX_STANDARD 14)


FILE(GLOB SOURCES "src/*.cpp")

add_executable(${PROJECT_NAME} ${SOURCES})

FILE(GLOB HEADERS "include/*.hpp")
add_custom_target(headers SOURCES ${HEADERS})

set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/SFML-2.5.1/lib/cmake/SFML")

find_package(SFML 2 REQUIRED audio graphics window system)
include_directories(${SFML_DIR})
target_link_libraries(${PROJECT_NAME} sfml-audio sfml-graphics sfml-window sfml-system)