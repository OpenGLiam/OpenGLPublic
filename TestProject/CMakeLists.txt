cmake_minimum_required(VERSION 3.0.0)
project(TestProjectCMakeFile VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(TestProjectCMakeFile src/main.cpp)
target_link_libraries( TestProjectCMakeFile glfw)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
