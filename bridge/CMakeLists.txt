cmake_minimum_required (VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project (BRIDGE)
set (SOURCES main.cpp)
set (HEADERS printer_interface.h printer_implementation.h)

add_executable(bridge ${SOURCES} ${HEADERS})
