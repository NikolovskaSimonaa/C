cmake_minimum_required(VERSION 3.5)

project(4_7 LANGUAGES C)

add_executable(4_7 main.c)

include(GNUInstallDirs)
install(TARGETS 4_7
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
