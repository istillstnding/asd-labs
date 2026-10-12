cmake_minimum_required(VERSION 3.20)
project(lab1 C)

set(CMAKE_C_STANDARD 11)

# Перший спосіб (без булевих операцій)
add_executable(lab1_method1 main.c)

# Другий спосіб (з булевими операціями)
add_executable(lab1_method2 main1.c)