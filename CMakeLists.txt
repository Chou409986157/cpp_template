cmake_minimum_required(VERSION 3.10)  # 最低cmake版本要求
project(cpp_template)  # 项目名称

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)

# opencv路径
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# 添加当前根目录下include文件夹到头文件搜索路径
include_directories(${PROJECT_SOURCE_DIR}/include)

# 将当前根目录下src文件中所有文件添加到SRC_LIST变量中
aux_source_directory(${PROJECT_SOURCE_DIR}/src SRC_LIST)

# 设置可执行文件输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

# 生成可执行文件
add_executable(cpp_template ${SRC_LIST} main.cpp)

# 设置库文件输出路径
# set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

# 生成动态库
# add_library(cpp_template SHARED ${SRC_LIST})

# 生成静态库
# add_library(cpp_template STATIC ${SRC_LIST})

# 链接opencv库
target_link_libraries(cpp_template PRIVATE ${OpenCV_LIBRARIES})
