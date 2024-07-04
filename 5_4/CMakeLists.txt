cmake_minimum_required(VERSION 3.5)

project(5_4 LANGUAGES C)

add_executable(5_4 main.c)

include(GNUInstallDirs)
install(TARGETS 5_4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
