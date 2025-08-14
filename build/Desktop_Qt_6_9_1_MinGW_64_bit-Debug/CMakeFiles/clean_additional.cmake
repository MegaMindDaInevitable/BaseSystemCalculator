# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "BaseSystemCalculator_autogen"
  "CMakeFiles\\BaseSystemCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\BaseSystemCalculator_autogen.dir\\ParseCache.txt"
  )
endif()
