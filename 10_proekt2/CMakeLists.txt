cmake_minimum_required(VERSION 3.5)

project(10_proekt2 LANGUAGES C)

add_executable(10_proekt2 main.c)

include(GNUInstallDirs)
install(TARGETS 10_proekt2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
