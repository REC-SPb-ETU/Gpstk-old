# apps/multipath/CMakeLists.txt


add_executable(mpsolve mpsolve.cpp ObsArray.cpp)
target_link_libraries(mpsolve gpstk)
<<<<<<< HEAD:ext/apps/multipath/CMakeLists.txt
install (TARGETS mpsolve DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS mpsolve DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/multipath/CMakeLists.txt
add_test(mpsolveTest mpsolve)
>>>>>>> Component-aware install configuration,:dev/ext/apps/multipath/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/multipath/CMakeLists.txt

