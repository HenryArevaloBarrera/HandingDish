cmake_minimum_required(VERSION 3.25)
project(HandingDish)

set(CMAKE_CXX_STANDARD 17)

add_executable(HandingDish main.cpp Dish.cpp Dish.h HandilingDish.cpp HandilingDish.h)

