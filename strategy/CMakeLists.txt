cmake_minimum_required (VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project (STRATEGY)
set (SOURCES main.cpp)
set (HEADERS printer.h strategy.h)

add_executable(strategy ${SOURCES} ${HEADERS})
