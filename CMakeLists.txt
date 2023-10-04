cmake_minimum_required(VERSION 3.15)
project(threadpoll_c)

aux_source_directory(./src DIR_SRCS) # 搜索当前目录下的所有.c文件

add_library(threadpoll_c SHARED ${DIR_SRCS}) # 生成动态库

target_link_libraries(threadpoll_c pthread) # 链接pthread库

add_executable(threadpoll_c_app main.c) # 生成可执行文件

include_directories(${PROJECT_SOURCE_DIR}/include) # 头文件目录

target_link_libraries(threadpoll_c_app threadpoll_c) # 链接threadpoll_c库