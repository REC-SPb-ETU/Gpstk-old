# apps/multipath/CMakeLists.txt


add_executable(mpsolve mpsolve.cpp ObsArray.cpp)
target_link_libraries(mpsolve gpstk)
<<<<<<< HEAD:ext/apps/multipath/CMakeLists.txt
install (TARGETS mpsolve DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS mpsolve DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
add_test(mpsolveTest mpsolve)
>>>>>>> Component-aware install configuration,:dev/ext/apps/multipath/CMakeLists.txt

