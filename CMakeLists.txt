cmake_minimum_required(VERSION 3.5)

project(shoppe LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(shoppe main.cpp
    item.h item.cpp)

include(GNUInstallDirs)
install(TARGETS shoppe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
