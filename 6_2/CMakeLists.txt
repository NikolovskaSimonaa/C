cmake_minimum_required(VERSION 3.5)

project(6_2 LANGUAGES C)

add_executable(6_2 main.c)

include(GNUInstallDirs)
install(TARGETS 6_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
