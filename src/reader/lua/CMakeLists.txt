cmake_minimum_required(VERSION 3.0)

file(GLOB inc_files ${proj_inc_prefix}/*.h)

file(GLOB src_files ${proj_src_prefix}/*.c)

add_library(lua ${inc_files} ${src_files})


