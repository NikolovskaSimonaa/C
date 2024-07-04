cmake_minimum_required(VERSION 3.5)

project(7_1 LANGUAGES C)

add_executable(7_1 main.c)

include(GNUInstallDirs)
install(TARGETS 7_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
