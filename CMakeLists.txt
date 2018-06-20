cmake_minimum_required(VERSION 2.6)

#option(USE_MYMATH "Use custom" ON)

project(hello)

set(hello_VERSION_MAJOR 1)
set(hello_VERSION_MINOR 0)

#configure_file(
#	"${PROJECT_SOURCE_DIR}/helloConfig.h.in"
#	"${PROJECT_BINARY_DIR}/helloConfig.h"
#	)
#
#include_directories("${PROJECT_BINARY_DIR}")
#if (USE_MYMATH)
#	include_directories("${PROJECT_BINARY_DIR}/MathFunctions")
#	add_subdirectory(MathFunctions)
#	set(EXTRA_LIBS ${EXTRA_LIBS} MathFunctions)
#endif (USE_MYMATH)


add_executable(hello hello.cpp)
#target_link_libraries(hello ${EXTRA_LIBS})


install (TARGETS hello DESTINATION bin)
install (FILES "${PROJECT_BINARY_DIR}/helloConfig.h" DESTINATION include)

