cmake_minimum_required(VERSION 3.1.0)
project(HW10-1)

add_compile_options(-std=c++11)
add_executable(print_shape print_shape_main.cc print_shape.cc)
add_executable(cast_quiz cast_quiz.cc)
add_executable(dynamice_cast dynamic_cast_main.cc dynamic_cast.cc)

