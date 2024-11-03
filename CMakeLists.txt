# Минимальная версия CMake: 3.8
cmake_minimum_required(VERSION 3.10 FATAL_ERROR)

# Имя проекта: sfml-lab-1
project(sfml-lab-1)
add_executable(01 main.cpp)

set(CMAKE_CXX_STANDARD 11)

find_package(Freetype)
find_package(JPEG)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

target_compile_features(01 PUBLIC cxx_std_17)
target_compile_definitions(01 PRIVATE SFML_STATIC)

target_link_libraries(01 sfml-graphics sfml-window sfml-system)