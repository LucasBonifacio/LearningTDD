cmake_minimum_required(VERSION 3.16)
project(fizzBuzzExample)

include_directories(/home/lucas/Documentos/Projetos/LearningTDD/googletest-master/googletest/include/)
set(CMAKE_CXX_STANDARD 20)

link_directories(/home/lucas/Documentos/Projetos/LearningTDD/googletest-master/build/lib/)
add_executable(fizzBuzzExample main.cpp)

target_link_libraries(fizzBuzzExample gtest gtest_main pthread)