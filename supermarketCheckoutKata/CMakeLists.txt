cmake_minimum_required(VERSION 3.16)
project(supermarketCheckoutKata)

include_directories(/home/lucas/Documentos/Projetos/LearningTDD/googletest-master/googletest/include/)
set(CMAKE_CXX_STANDARD 20)
link_directories(/home/lucas/Documentos/Projetos/LearningTDD/googletest-master/build/lib/)
add_executable(supermarketCheckoutKata main.cpp Checkout.cpp Checkout.h)
target_link_libraries(supermarketCheckoutKata gtest gtest_main pthread)