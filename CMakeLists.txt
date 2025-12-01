cmake_minimum_required(VERSION 3.31)
project(Task-Manager)

set(CMAKE_CXX_STANDARD 26)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ..)

add_executable(${PROJECT_NAME}  src/main.cpp 
                                src/task.cpp 
                                src/user.cpp 
                                src/data.cpp)
