# apps/rfw/CMakeLists.txt

add_executable(rfw rfw.cpp FDStreamBuff.cpp TCPStreamBuff.cpp)
target_link_libraries(rfw gpstk)
<<<<<<< HEAD:ext/apps/rfw/CMakeLists.txt
install (TARGETS rfw DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS rfw DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/rfw/CMakeLists.txt
add_test(rfwTest rfw)
>>>>>>> Component-aware install configuration,:dev/ext/apps/rfw/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/rfw/CMakeLists.txt

if (CMAKE_SYSTEM_NAME MATCHES "SunOS")
  target_link_libraries(rfw socket nsl)
endif()
