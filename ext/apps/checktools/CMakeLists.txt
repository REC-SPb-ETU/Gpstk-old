# apps/checktools/CMakeLists.txt

add_executable(rowcheck rowcheck.cpp)
target_link_libraries(rowcheck gpstk)
<<<<<<< HEAD:ext/apps/checktools/CMakeLists.txt
install (TARGETS rowcheck DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(rmwcheck rmwcheck.cpp)
target_link_libraries(rmwcheck gpstk)
install (TARGETS rmwcheck DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(rnwcheck rnwcheck.cpp)
target_link_libraries(rnwcheck gpstk)
install (TARGETS rnwcheck DESTINATION "${CMAKE_INSTALL_BINDIR}")

=======
install (TARGETS rowcheck DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(rmwcheck rmwcheck.cpp)
target_link_libraries(rmwcheck gpstk)
install (TARGETS rmwcheck DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(rnwcheck rnwcheck.cpp)
target_link_libraries(rnwcheck gpstk)
install (TARGETS rnwcheck DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/checktools/CMakeLists.txt
add_test(rnwcheckTest rnwcheck)
>>>>>>> Component-aware install configuration,:dev/ext/apps/checktools/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/checktools/CMakeLists.txt

