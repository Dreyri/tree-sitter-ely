cmake_minimum_required(VERSION 3.11)

set(IS_MASTER_PROJECT OFF)

if(${CMAKE_CURRENT_SOURCE_DIR} STREQUAL ${CMAKE_SOURCE_DIR})
  set(IS_MASTER_PROJECT ON)
endif()

if (${IS_MASTER_PROJECT})
  project(tree-sitter-ely VERSION "0.0.1" LANGUAGES C)
endif()

add_library(tree-sitter-ely ${CMAKE_CURRENT_SOURCE_DIR}/src/parser.c)
target_include_directories(
    tree-sitter-ely 
    PRIVATE 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>)