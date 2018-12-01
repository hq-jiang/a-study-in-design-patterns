cmake_minimum_required (VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project (SINGLETON)
set (SOURCES main.cpp)
set (HEADERS singleton.h)

add_executable(strategy ${SOURCES} ${HEADERS})
