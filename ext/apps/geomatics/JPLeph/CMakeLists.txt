# apps/geomatics/JPLeph/CMakeLists.txt

add_executable(convertSSEph convertSSEph.cpp)
target_link_libraries(convertSSEph gpstk)
<<<<<<< HEAD:ext/apps/geomatics/JPLeph/CMakeLists.txt
install (TARGETS convertSSEph DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(testSSEph testSSEph.cpp)
target_link_libraries(testSSEph gpstk)
install (TARGETS testSSEph DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS convertSSEph DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(testSSEph testSSEph.cpp)
target_link_libraries(testSSEph gpstk)
install (TARGETS testSSEph DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/geomatics/JPLeph/CMakeLists.txt
add_test(testSSEphTest testSSEph)
>>>>>>> Component-aware install configuration,:dev/ext/apps/geomatics/JPLeph/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/geomatics/JPLeph/CMakeLists.txt


