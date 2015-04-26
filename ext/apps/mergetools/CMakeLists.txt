# apps/mergetools/CMakeLists.txt


add_executable(mergeRinObs mergeRinObs.cpp)
target_link_libraries(mergeRinObs gpstk)
<<<<<<< HEAD:ext/apps/mergetools/CMakeLists.txt
install (TARGETS mergeRinObs DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(mergeRinNav mergeRinNav.cpp)
target_link_libraries(mergeRinNav gpstk)
install (TARGETS mergeRinNav DESTINATION "${CMAKE_INSTALL_BINDIR}")

add_executable(mergeRinMet mergeRinMet.cpp)
target_link_libraries(mergeRinMet gpstk)
install (TARGETS mergeRinMet DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS mergeRinObs DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(mergeRinNav mergeRinNav.cpp)
target_link_libraries(mergeRinNav gpstk)
install (TARGETS mergeRinNav DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(mergeRinMet mergeRinMet.cpp)
target_link_libraries(mergeRinMet gpstk)
install (TARGETS mergeRinMet DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/mergetools/CMakeLists.txt
add_test(mergeRinMetTest mergeRinMet)
>>>>>>> Component-aware install configuration,:dev/ext/apps/mergetools/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/mergetools/CMakeLists.txt

if (CMAKE_SYSTEM_NAME MATCHES "SunOS")
  target_link_libraries(mergeRinObs gen)
  target_link_libraries(mergeRinMet gen)
  target_link_libraries(mergeRinNav gen)
endif()

