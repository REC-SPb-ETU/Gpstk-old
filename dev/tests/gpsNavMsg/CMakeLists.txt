get_filename_component(package_name ${CMAKE_CURRENT_LIST_DIR} NAME)
add_executable(${package_name}_test xBrcClockCorrection.cpp xBrcClockCorrectiongpsNavMsg.cpp xBrcKeplerOrbit.cpp xBrcKeplerOrbitgpsNavMsg.cpp xCNAV2EphClk.cpp xCNAV2EphClockPNB.cpp xCNAV2gpsNavMsg.cpp xCNAV2PNBgpsNavMsg.cpp xCNAVClock.cpp xCNAVClockgpsNavMsg.cpp xCNAVClockPNB.cpp xCNAVClockPNBgpsNavMsg.cpp xCNAVEphemeris.cpp xCNAVEphemerisgpsNavMsg.cpp xCNAVEphemerisPNB.cpp xCNAVEphemerisPNBgpsNavMsg.cpp xEngEphemerisgpsNavMsg.cpp xgpsNavMsgM.cpp xPackedNavBits.cpp xPackedNavBitsgpsNavMsg.cpp)
target_link_libraries(${package_name}_test gpstk ${CPPUNIT_LIBRARIES})
add_test(NAME "${package_name}_test" COMMAND "${package_name}_test")
