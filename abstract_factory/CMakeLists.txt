cmake_minimum_required (VERSION 2.8)
set (CMAKE_CXX_STANDARD 11)
project (ABSTRACT_FACTORY)
set (SOURCES main.cpp)
set (HEADERS
  abstractfactory.h
  newspaper.h
  broadsheet.h
  tabloid.h)

add_executable(abstract_facory ${SOURCES} ${HEADERS})
