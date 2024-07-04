cmake_minimum_required(VERSION 3.5)

project(11_1 LANGUAGES C)

add_executable(11_1 main.c)

include(GNUInstallDirs)
install(TARGETS 11_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
