# apps/receiver/CMakeLists.txt

add_executable(rtAshtech AshtechMessage.cpp rtAshtech.cpp ScreenControl.cpp)
target_link_libraries(rtAshtech gpstk)
<<<<<<< HEAD:ext/apps/receiver/CMakeLists.txt
install (TARGETS rtAshtech DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS rtAshtech DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/receiver/CMakeLists.txt
add_test(rtAshtechTest rtAshtech)
>>>>>>> Component-aware install configuration,:dev/ext/apps/receiver/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/receiver/CMakeLists.txt

