# apps/filetools/CMakeLists.txt

add_executable(glodump GloDump.cpp)
target_link_libraries(glodump gpstk)
<<<<<<< HEAD:ext/apps/filetools/CMakeLists.txt
install (TARGETS glodump DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(rinexthin RinexThin.cpp)
target_link_libraries(rinexthin gpstk)
install (TARGETS rinexthin DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(sp3version sp3version.cpp)
target_link_libraries(sp3version gpstk)
install (TARGETS sp3version DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(bc2sp3 bc2sp3.cpp)
target_link_libraries(bc2sp3 gpstk)
install (TARGETS bc2sp3 DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS glodump DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(rinexthin RinexThin.cpp)
target_link_libraries(rinexthin gpstk)
install (TARGETS rinexthin DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(sp3version sp3version.cpp)
target_link_libraries(sp3version gpstk)
install (TARGETS sp3version DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(bc2sp3 bc2sp3.cpp)
target_link_libraries(bc2sp3 gpstk)
install (TARGETS bc2sp3 DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/filetools/CMakeLists.txt
add_test(bc2sp3Test bc2sp3)
>>>>>>> Component-aware install configuration,:dev/ext/apps/filetools/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/filetools/CMakeLists.txt


