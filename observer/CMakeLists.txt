cmake_minimum_required (VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project (OBSERVER)
set (SOURCES main.cpp publisher.cpp subscriber.cpp)
set (HEADERS publisher.h subscriber.h)

add_executable(Observer ${SOURCES} ${HEADERS})
