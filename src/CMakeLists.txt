cmake_minimum_required(VERSION 3.10)

project(InfraPulse)

set(CMAKE_CXX_STANDARD 17)

include_directories(include)

add_executable(
    InfraPulse

    src/main.cpp
    src/cpu_monitor.cpp
)