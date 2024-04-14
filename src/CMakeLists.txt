cmake_minimum_required(VERSION 3.5.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(CppCodeChallenges VERSION 1.0)
add_executable(CppCodeChallenges main.cpp)

add_subdirectory(utils)
add_subdirectory(algorithms)

target_link_libraries(CppCodeChallenges PUBLIC utils)
target_link_libraries(CppCodeChallenges PUBLIC algorithms)

target_include_directories(
  CppCodeChallenges PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${PROJECT_SOURCE_DIR}/algorithms"
  "${PROJECT_SOURCE_DIR}/utils"
)
