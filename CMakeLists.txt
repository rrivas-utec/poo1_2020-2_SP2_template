cmake_minimum_required(VERSION 3.10.2)
project(SP2)

set(CMAKE_CXX_STANDARD 17)

add_executable(SP2
        main.cpp
        test_1.cpp
        test_2.cpp
        test_3.cpp
        test_4.cpp
        test_5.cpp
        SP2.cpp SP2.h)

configure_file(test_1.in ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(test_2.in ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(test_3.in ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(test_4.in ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
configure_file(test_5.in ${CMAKE_CURRENT_BINARY_DIR} COPYONLY)
