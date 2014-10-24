cmake_minimum_required(VERSION 3.0)

project(fbook)

set(src_prefix ${PROJECT_SOURCE_DIR}/src)

set(inc_prefix ${PROJECT_SOURCE_DIR}/include)

set(RUNTIME_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

set(LIBRARY_OUTOUPT_PATH ${PROJECT_SOURCE_DIR}/lib)

link_directories(${PROJECT_SOURCE_DIR}/lib)

include_directories(${PROJECT_SOURCE_DIR}/include)

#导入常用的cmake
file(GLOB cmakefile ${PROJECT_SOURCE_DIR}/cmake/*.cmake)
foreach(file ${cmakefile})
    message(include ${file})
	include(${file})
endforeach()

#子项目
set(projs 
	editor
    reader
)

foreach(proj ${projs})
	set(proj_src_prefix ${src_prefix}/${proj})
	set(proj_inc_prefix ${inc_prefix}/${proj})
   	add_subdirectory(${proj_src_prefix})
endforeach(proj)
