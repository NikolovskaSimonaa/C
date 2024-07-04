cmake_minimum_required(VERSION 3.5)

project(4_9 LANGUAGES C)

add_executable(4_9 main.c)

include(GNUInstallDirs)
install(TARGETS 4_9
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
