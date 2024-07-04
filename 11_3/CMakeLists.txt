cmake_minimum_required(VERSION 3.5)

project(11_3 LANGUAGES C)

add_executable(11_3 main.c)

include(GNUInstallDirs)
install(TARGETS 11_3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
