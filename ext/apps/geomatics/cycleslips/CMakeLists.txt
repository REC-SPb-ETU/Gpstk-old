# apps/geomatics/cycleslips/CMakeLists.txt

add_executable(DiscFix DiscFix.cpp)
target_link_libraries(DiscFix gpstk)
<<<<<<< HEAD:ext/apps/geomatics/cycleslips/CMakeLists.txt
install (TARGETS DiscFix DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS DiscFix DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
add_test(DiscFixTest DiscFix)
>>>>>>> Component-aware install configuration,:dev/ext/apps/geomatics/cycleslips/CMakeLists.txt


