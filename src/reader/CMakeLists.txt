cmake_minimum_required(VERSION 3.0)

file(GLOB lua_inc_files ${proj_src_prefix}/lua/*.h)

file(GLOB lua_src_files ${proj_src_prefix}/lua/*.c)

set(src_files
	${proj_src_prefix}/reader.cpp
)

add_executable(reader ${src_files} ${lua_inc_files} ${lua_src_files})

target_link_libraries(reader framework)

FIND_PACKAGE(SDL REQUIRED SDL2Main SDL2_image SDL2_mixer SDL2_ttf)

IF(SDL_FOUND)
# 加入头文件路径
INCLUDE_DIRECTORIES( ${SDL_INCLUDE_DIR} )
# 加入库文件路径
LINK_DIRECTORIES( ${SDL_LIB_DIR} )
#　要加入的库名
TARGET_LINK_LIBRARIES(reader    ${SDL_LIBRARIES} )
ENDIF(SDL_FOUND)



