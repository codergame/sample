cmake_minimum_required(VERSION 3.0)

set(src_files 
	${proj_src_prefix}/editor.cpp
)

add_executable(editor ${src_files})

#hecking whether wxWidgets have been installed,
FIND_PACKAGE(wxWidgets REQUIRED base core gl adv xml xrc html qa )

IF(wxWidgets_FOUND)
	INCLUDE( ${wxWidgets_USE_FILE} )
# 加入头文件路径
	INCLUDE_DIRECTORIES( ${wxWidgets_INCLUDE_DIRS} )
# 加入库文件路径
	LINK_DIRECTORIES( ${wxWidgets_LIB_DIR} )
#　要加入的库名
	TARGET_LINK_LIBRARIES(editor    ${wxWidgets_LIBRARIES} ) 
ENDIF(wxWidgets_FOUND)

