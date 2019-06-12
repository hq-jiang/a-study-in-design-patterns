cmake_minimum_required(VERSION 3.2)

project(ADAPTER)

set (CMAKE_CXX_STANDARD 11)

set(SOURCES main.cpp)

set(HEADERS printer.h book.h movie.h)

add_executable(${PROJECT_NAME} ${SOURCES} ${HEADERS})
