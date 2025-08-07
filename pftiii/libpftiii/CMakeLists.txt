# This software was developed at the National Institute of Standards and
# Technology (NIST) by employees of the Federal Government in the course
# of their official duties. Pursuant to title 17 Section 105 of the
# United States Code, this software is not subject to copyright protection
# and is in the public domain. NIST assumes no responsibility  whatsoever for
# its use by other parties, and makes no guarantees, expressed or implied,
# about its quality, reliability, or any other characteristic.

cmake_minimum_required(VERSION 3.28.3)

project(pftiii_library)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(libpftiii SHARED)
target_sources(libpftiii PRIVATE libpftiii.cpp)
target_include_directories(libpftiii PRIVATE ${PROJECT_SOURCE_DIR}/../include)

if (CMAKE_INSTALL_PREFIX_INITIALIZED_TO_DEFAULT)
	set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR}/../validation CACHE PATH "..." FORCE)
endif()

# Extern the version symbols
target_compile_definitions(libpftiii PRIVATE NIST_EXTERN_API_VERSION)

# Enable documentation warnings with clang
target_compile_options(libpftiii PRIVATE
     $<$<OR:$<CXX_COMPILER_ID:Clang>,$<CXX_COMPILER_ID:AppleClang>>:
          -Wdocumentation>)

# Turn on warnings
target_compile_options(libpftiii PRIVATE
    -Wall -Wextra -pedantic -Wconversion -Wsign-conversion)

set_target_properties(libpftiii PROPERTIES
    PUBLIC_HEADER ${PROJECT_SOURCE_DIR}/../include/pftiii.h
    OUTPUT_NAME pftiii)

include(GNUInstallDirs)
install(TARGETS libpftiii
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    PUBLIC_HEADER DESTINATION ${CMAKE_INSTALL_INCLUDEDIR})
