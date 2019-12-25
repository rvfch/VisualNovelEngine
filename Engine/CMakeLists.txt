cmake_minimum_required(VERSION 3.15)
project(vnengine)

set(CMAKE_CXX_STANDARD 14)


FILE(GLOB SOURCES "src/*/*.cpp")
FILE(GLOB HEADERS "include/*/*.h")

add_executable(${PROJECT_NAME} ${SOURCES} src/main.cpp ${HEADERS})

include(CTest)
enable_testing()
add_subdirectory(tests)
include_directories(thirdparty/plog/include)

set(TEST_SOURCES tests/*.cpp)


set(SFML_STATIC_LIBRARIES TRUE)
set(SFML_DIR "C:/SFML-2.5.1/lib/cmake/SFML")

find_package(SFML 2 REQUIRED audio graphics window system)
include_directories(${SFML_DIR})
target_link_libraries(${PROJECT_NAME} sfml-audio sfml-graphics sfml-window sfml-system)