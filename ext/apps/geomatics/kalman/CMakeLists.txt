# apps/geomatics/kalman/CMakeLists.txt

add_executable(mergeSRI mergeSRI.cpp)
target_link_libraries(mergeSRI gpstk)
<<<<<<< HEAD:ext/apps/geomatics/kalman/CMakeLists.txt
install (TARGETS mergeSRI DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(tkalm tkalm.cpp)
target_link_libraries(tkalm gpstk)
install (TARGETS tkalm DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS mergeSRI DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
add_test(mergeSRITest mergeSRI)

add_executable(tkalm tkalm.cpp)
target_link_libraries(tkalm gpstk)
install (TARGETS tkalm DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
add_test(tkalmTest tkalm)
>>>>>>> Component-aware install configuration,:dev/ext/apps/geomatics/kalman/CMakeLists.txt

