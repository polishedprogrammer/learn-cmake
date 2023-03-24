cmake_minimum_required(VERSION 3.14)
project(is_regular)

set(CMAKE_CXX_STANDARD 17)
add_executable(is_regular main.cpp)
target_link_libraries(is_regular $<$<AND:$<CXX_COMPILER_ID:GNU>,$<VERSION_LESS:$<CXX_COMPILER_VERSION>,9.0>>:stdc++fs>)
