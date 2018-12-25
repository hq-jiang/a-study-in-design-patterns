cmake_minimum_required (VERSION 2.8)

project(COMPOSITE)

set (CMAKE_CXX_STANDARD 11)

set(SOURCES main.cpp)
set(HEADERS composite.h)

add_executable(composite ${SOURCES} ${HEADERS})
