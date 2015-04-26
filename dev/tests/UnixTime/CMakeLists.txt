get_filename_component(package_name ${CMAKE_CURRENT_LIST_DIR} NAME)
add_executable(${package_name}_test xUnixTime.cpp xUnixTimeM.cpp)
target_link_libraries(${package_name}_test gpstk ${CPPUNIT_LIBRARIES})
add_test(NAME "${package_name}_test" COMMAND "${package_name}_test")
