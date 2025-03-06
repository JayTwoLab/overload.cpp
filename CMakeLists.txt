cmake_minimum_required(VERSION 3.16)

project(overload_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(overload_cpp
    main.cpp
    overload.hpp)

include(GNUInstallDirs)
install(TARGETS overload_cpp
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
