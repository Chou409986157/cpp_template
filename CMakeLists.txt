cmake_minimum_required(VERSION 3.10)  # 最低cmake版本要求
project(cpp_template)  # 项目名称
set(CMAKE_CXX_STANDARD 11)  # C++标准为C11

include_directories(${PROJECT_SOURCE_DIR}/include)  # 添加当前根目录下include文件夹到头文件搜索路径
# link_directories(${PROJECT_SOURCE_DIR}/lib)  # 添加当前根目录下lib文件夹到库文件搜索路径

aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)  # 将当前根目录下src文件中所有文件添加到SRC_LIST变量中
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)  # 设置可执行文件输出路径
add_executable(cpp_template ${SRC_LIST};main.cpp)  # 生成可执行文件

# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)  # 设置库文件输出路径
# add_library(cpp_template SHARED ${SRC_LIST})  # 生成动态库
# add_library(cpp_template STATIC ${SRC_LIST})  # 生成静态库
