cmake_minimum_required(VERSION 3.15)
project(sampapi VERSION 1.1.0 LANGUAGES CXX)

add_library(sampapi)
add_library(BlastHack::sampapi ALIAS sampapi)
add_subdirectory(src/sampapi)
add_subdirectory(include/sampapi)

get_target_property(SOURCES sampapi SOURCES)
source_group(TREE "${CMAKE_CURRENT_SOURCE_DIR}" FILES ${SOURCES})

target_compile_features(sampapi PRIVATE cxx_std_11)
target_include_directories(sampapi
  PUBLIC
    $<INSTALL_INTERFACE:include>
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
)


set_target_properties(sampapi
    PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED ON
    CXX_EXTENSIONS OFF
)

set_property(TARGET sampapi PROPERTY MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:DebugDLL>")
