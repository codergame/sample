cmake_minimum_required(VERSION 3.0)

set(src_files
	${proj_src_prefix}/reader.cpp
)

add_executable(reader ${src_files})

FIND_PACKAGE(SDL REQUIRED SDL2Main)

IF(SDL_FOUND)
# 加入头文件路径
INCLUDE_DIRECTORIES( ${SDL_INCLUDE_DIR} )
# 加入库文件路径
LINK_DIRECTORIES( ${SDL_LIB_DIR} )
#　要加入的库名
TARGET_LINK_LIBRARIES(reader    ${SDL_LIBRARIES} )
ENDIF(SDL_FOUND)



