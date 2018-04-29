cmake_minimum_required(VERSION 3.0)
project(pi-blink)

# Link to libwiringPi.so
set(PROJECT_LINK_LIBS libwiringPi.so)

add_executable(pi-blink main.cpp)
target_link_libraries(pi-blink ${PROJECT_LINK_LIBS})
