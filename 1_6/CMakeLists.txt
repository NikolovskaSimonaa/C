cmake_minimum_required(VERSION 3.5)

project(1_6 LANGUAGES C)

add_executable(1_6 main.c)

include(GNUInstallDirs)
install(TARGETS 1_6
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
