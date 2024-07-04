cmake_minimum_required(VERSION 3.5)

project(13_3 LANGUAGES C)

add_executable(13_3 main.c)

include(GNUInstallDirs)
install(TARGETS 13_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
