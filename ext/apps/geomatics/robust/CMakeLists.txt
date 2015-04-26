# apps/geomatics/robust/CMakeLists.txt

add_executable(lsfilt lsfilt.cpp)
target_link_libraries(lsfilt gpstk)
<<<<<<< HEAD:ext/apps/geomatics/robust/CMakeLists.txt
install (TARGETS lsfilt DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(rstats rstats.cpp)
target_link_libraries(rstats gpstk)
install (TARGETS rstats DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS lsfilt DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(rstats rstats.cpp)
target_link_libraries(rstats gpstk)
install (TARGETS rstats DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/geomatics/robust/CMakeLists.txt
add_test(rstatsTest rstats)
>>>>>>> Component-aware install configuration,:dev/ext/apps/geomatics/robust/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/geomatics/robust/CMakeLists.txt

