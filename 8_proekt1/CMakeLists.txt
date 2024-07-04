cmake_minimum_required(VERSION 3.5)

project(8_proekt1 LANGUAGES C)

add_executable(8_proekt1 main.c)

include(GNUInstallDirs)
install(TARGETS 8_proekt1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
