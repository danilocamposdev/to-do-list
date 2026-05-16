cmake_minimum_required(VERSION 3.23)

project(ToDoList VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

include_directories(include)

add_executable(to-do-list
    src/main.cpp
    src/Task.cpp
	src/TodoList.cpp
)

target_include_directories(to-do-list PRIVATE include)
