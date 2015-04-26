# apps/geomatics/relposition/CMakeLists.txt

add_library(baselib STATIC
DataStructures.cpp
CommandInput.cpp
Configure.cpp
ReadRawData.cpp
ReadObsFiles.cpp
EphemerisImprovement.cpp
ClockModel.cpp
Synchronization.cpp
DoubleDifference.cpp
EditDDs.cpp
DataOutput.cpp
Estimation.cpp
Timetable.cpp
ElevationMask.cpp
ProcessRawData.cpp
ComputeRAIMSolution.cpp
EditRawDataBuffers.cpp
StochasticModels.cpp
)
target_link_libraries(baselib gpstk)

add_executable(DDBase DDBase.cpp)
target_link_libraries(DDBase baselib)
<<<<<<< HEAD:ext/apps/geomatics/relposition/CMakeLists.txt
install (TARGETS DDBase DESTINATION "${CMAKE_INSTALL_BINDIR}")
=======
install (TARGETS DDBase DESTINATION bin COMPONENT ${TOOLS_COMPONENT})
<<<<<<< HEAD:ext/apps/geomatics/relposition/CMakeLists.txt
add_test(DDBaseTest DDBase)
>>>>>>> Component-aware install configuration,:dev/ext/apps/geomatics/relposition/CMakeLists.txt
=======

>>>>>>> There is no tests in "ext" package - thats why "add_test" was an error:dev/ext/apps/geomatics/relposition/CMakeLists.txt



