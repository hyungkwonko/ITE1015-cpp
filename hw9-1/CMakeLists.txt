cmake_minimum_required(VERSION 3.1.0)
project(HW9-1)

add_compile_options(-std=c++11)
add_executable(classes_main classes_main.cc classes.cc)
add_executable(print_info print_info_main.cc print_info.cc)
add_executable(print_member print_member_main.cc print_member.cc)

