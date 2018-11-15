cmake_minimum_required(VERSION 3.12)
project(petrol_station)

set(CMAKE_CXX_STANDARD 14)

add_executable(petrol_station main.cpp Station.cpp Station.h Car.cpp Car.h)