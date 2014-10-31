cmake_minimum_required(VERSION 3.0)

file(GLOB inc_files ${proj_inc_prefix}/*.*)

file(GLOB src_files ${proj_src_prefix}/*.*)

add_library(framework ${inc_files} ${src_files})

target_link_libraries(framework lua)

