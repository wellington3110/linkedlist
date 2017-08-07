cmake_minimum_required(VERSION 3.9.0)
project(list)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

add_subdirectory(app)
add_subdirectory(command)
add_subdirectory(data)
add_subdirectory(interface)
add_subdirectory(main)
add_subdirectory(util)

