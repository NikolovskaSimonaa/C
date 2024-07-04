cmake_minimum_required(VERSION 3.5)

project(5_1 LANGUAGES C)

add_executable(5_1 main.c)

include(GNUInstallDirs)
install(TARGETS 5_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
