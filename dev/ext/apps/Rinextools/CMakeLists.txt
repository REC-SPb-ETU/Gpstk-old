# apps/Rinextools/CMakeLists.txt

add_executable(RinDump RinDump.cpp)
target_link_libraries(RinDump gpstk)
install (TARGETS RinDump DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(RinEdit RinEdit.cpp)
target_link_libraries(RinEdit gpstk)
install (TARGETS RinEdit DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(RinNav RinNav.cpp)
target_link_libraries(RinNav gpstk)
install (TARGETS RinNav DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


add_executable(RinSum RinSum.cpp)
target_link_libraries(RinSum gpstk)
install (TARGETS RinSum DESTINATION bin COMPONENT ${TOOLS_COMPONENT})


