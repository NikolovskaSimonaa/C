cmake_minimum_required(VERSION 3.5)

project(9_11 LANGUAGES C)

add_executable(9_11 main.c)

include(GNUInstallDirs)
install(TARGETS 9_11
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
