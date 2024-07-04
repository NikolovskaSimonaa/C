cmake_minimum_required(VERSION 3.5)

project(12_1 LANGUAGES C)

add_executable(12_1 main.c)

include(GNUInstallDirs)
install(TARGETS 12_1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
