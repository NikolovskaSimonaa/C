cmake_minimum_required(VERSION 3.5)

project(8_1 LANGUAGES C)

add_executable(8_1 main.c)

include(GNUInstallDirs)
install(TARGETS 8_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
