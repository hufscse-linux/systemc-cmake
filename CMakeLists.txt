cmake_minimum_required(VERSION 2.8)

set(SRCS_PATH ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(SRCS ${SRCS_PATH}/makeclock.cpp)

include(FindPkgConfig)

pkg_check_modules(PKGS REQUIRED systemc)
if(${PKGS_FOUND})
	include_directories(${PKGS_INCLUDE_DIRS})
endif(${PKGS_FOUND})

add_executable(makeclock ${SRCS})
target_link_libraries(makeclock ${PKGS_LIBRARIES}) 
