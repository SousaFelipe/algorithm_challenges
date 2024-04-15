cmake_minimum_required(VERSION 3.5.0)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

project(CppChallenge VERSION 1.0)
add_executable(CppChallenge main.cpp)

add_subdirectory(games)
add_subdirectory(algorithms)
add_subdirectory(utils)

target_link_libraries(CppChallenge PUBLIC games)
target_link_libraries(CppChallenge PUBLIC algorithms)
target_link_libraries(CppChallenge PUBLIC utils)

target_include_directories(CppChallenge PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/games")

target_include_directories(CppChallenge PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/utils")

target_include_directories(CppChallenge PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/algorithms")
