add_executable(02 main.cpp)

set(CMAKE_CXX_STANDARD 11)

find_package(Freetype)
find_package(JPEG)
find_package(SFML 2.5 COMPONENTS graphics window system REQUIRED)

target_compile_features(02 PUBLIC cxx_std_17)
target_compile_definitions(02 PRIVATE SFML_STATIC)

target_link_libraries(02 sfml-graphics sfml-window sfml-system)