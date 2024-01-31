cmake_minimum_required(VERSION 3.5) 
project(test)
aux_source_directory(./src srcs)
add_executable(${PROJECT_NAME} ${srcs}) 
