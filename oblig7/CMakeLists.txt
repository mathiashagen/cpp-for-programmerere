cmake_minimum_required(VERSION 3.1)

project(oblig7)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -pthread -Wall -Wextra -Wno-unused-parameter")

add_executable(oblig7 main.cpp fraction.cpp)

add_executable(oppgave2 oppgave2.cpp set.cpp)
