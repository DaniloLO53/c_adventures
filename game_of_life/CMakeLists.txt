cmake_minimum_required(VERSION 3.31)
project(game_of_life C)

set(CMAKE_C_STANDARD 23)

list(APPEND CMAKE_PREFIX_PATH "~/SDL/build")
find_package(SDL3 REQUIRED)

add_executable(game_of_life main.c)
target_link_libraries(game_of_life PRIVATE SDL3::SDL3)