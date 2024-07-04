cmake_minimum_required(VERSION 3.5)

project(12_3 LANGUAGES C)

add_executable(12_3 main.c)

include(GNUInstallDirs)
install(TARGETS 12_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
