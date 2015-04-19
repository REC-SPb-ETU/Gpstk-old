# apps/differential/CMakeLists.txt

add_executable(vecsol vecsol.cpp)
target_link_libraries(vecsol gpstk)
<<<<<<< HEAD:ext/apps/differential/CMakeLists.txt
install (TARGETS vecsol DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS vecsol DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
add_test(vecsolTest vecsol)
>>>>>>> Component-aware install configuration,:dev/ext/apps/differential/CMakeLists.txt
