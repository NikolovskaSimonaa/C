cmake_minimum_required(VERSION 3.5)

project(9_8 LANGUAGES C)

add_executable(9_8 main.c)

include(GNUInstallDirs)
install(TARGETS 9_8
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
