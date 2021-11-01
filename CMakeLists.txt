cmake_minimum_required(VERSION 3.20)
project(CurrencyConverter)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(CurrencyConverter src/main.cpp src/Convert.cpp src/Convert.h src/Display.cpp src/Display.h)
