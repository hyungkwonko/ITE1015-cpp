cmake_minimum_required(VERSION 3.1.0)
project(HW12-2)

add_compile_options(-std=c++11)
add_executable(linked_list linked_list_main.cc linked_list.cc)
add_executable(shared_ptr shared_ptr_main.cc shared_ptr.cc)

