cmake_minimum_required(VERSION 3.25)
project(Task3)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_OSX_ARCHITECTURES "arm64")

add_executable(Task3 main.cpp test.cpp main.h)

find_package(PkgConfig REQUIRED)
pkg_search_module(CPPUTEST REQUIRED cpputest)

target_link_libraries(Task3 /opt/homebrew/Cellar/cpputest/4.0/lib/libCppUTest.a /opt/homebrew/Cellar/cpputest/4.0/lib/libCppUTestExt.a)
target_include_directories(Task3 PRIVATE ${CPPUTEST_INCLUDE_DIRS})
