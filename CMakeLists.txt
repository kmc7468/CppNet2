cmake_minimum_required(VERSION 3.8.0)
project(CppNet2 CXX)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(MAKE_SHARED OFF CACHE BOOL "If this option is set, CppNet2 will be compiled as a shared library.")

unset(DISABLE_SOME_WARNINGS CACHE)
if(${MSVC})
	if(${MAKE_SHARED})
		set(DISABLE_SOME_WARNINGS ON CACHE BOOL "If this option is set, Warnings that only occur when compiling to a shared library with MSVC will be disabled(The recommended value is true).")
	endif()
endif()

include_directories("./include")
file(GLOB_RECURSE SOURCE_LIST "./src/*.cpp")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${OUTPUT_DIR})

add_definitions(-DCPPNET2_INTERNAL)

if(${DISABLE_SOME_WARNINGS})
	add_definitions(-DCPPNET2_DISABLE_SOME_WARNINGS)
endif()

if(${MAKE_SHARED})
	add_definitions(-DCPPNET2_MAKE_SHARED)
	add_library(${PROJECT_NAME} SHARED ${SOURCE_LIST})
else()
	add_library(${PROJECT_NAME} STATIC ${SOURCE_LIST})
endif()

install(DIRECTORY "./include/CppNet2" DESTINATION "include")
install(TARGETS ${PROJECT_NAME} DESTINATION "lib")