# http://www.cmake.org/pipermail/cmake/2006-October/011446.html
#
# Find the CppUnit includes and library
#
# This module defines
# CPPUNIT_INCLUDE_DIRS, where to find tiff.h, etc.
# CPPUNIT_LIBRARIES, the libraries to link against to use CppUnit.
# CPPUNIT_FOUND, If false, do not try to use CppUnit.

FIND_PATH(CPPUNIT_INCLUDE_DIRS cppunit/TestCase.h
  C:\\cppunit-1.12.1\\cppunit-1.12.1\\include
  /usr/local/include
  /usr/include
)

FIND_LIBRARY(CPPUNIT_LIBRARIES cppunit
           ${CPPUNIT_INCLUDE_DIRS}/../lib
           /usr/local/lib
           /usr/lib)

IF(CPPUNIT_INCLUDE_DIRS)
  IF(CPPUNIT_LIBRARIES)
    SET(CPPUNIT_FOUND "YES")
    SET(CPPUNIT_LIBRARIES ${CPPUNIT_LIBRARIES})
  ENDIF(CPPUNIT_LIBRARIES)
ENDIF(CPPUNIT_INCLUDE_DIRS)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(CPPUNIT DEFAULT_MSG CPPUNIT_LIBRARIES CPPUNIT_INCLUDE_DIRS)
