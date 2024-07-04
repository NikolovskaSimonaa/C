cmake_minimum_required(VERSION 3.5)

project(12_2 LANGUAGES C)

add_executable(12_2 main.c)

include(GNUInstallDirs)
install(TARGETS 12_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
