cmake_minimum_required(VERSION 2.5)
project(HW8)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp lexical_word_entries.cpp lexical_word_entries.hpp clocale_delimiters.cpp clocale_delimiters.hpp)
add_executable(HW8 ${SOURCE_FILES})