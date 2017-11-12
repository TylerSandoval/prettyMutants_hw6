cmake_minimum_required(VERSION 3.8)
project(prettyMutants_hw6)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES main.cpp)
set(SOURCE_FILES SuperArray.cpp SuperArray.h testArray.cpp)
#set(SOURCE_FILES SuperArray.cpp SuperArray.h main.cpp)


add_executable(sampleHw6 ${SOURCE_FILES})