cmake_minimum_required(VERSION 3.10)
project(Hello VERSION 1.0.0 LANGUAGES C )
set(C_STANDARD 99)
set(C_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_subdirectory(src)

if(TARGET_GROUP STREQUAL test)
  include(CTest)
  add_subdirectory(external)
  add_subdirectory(test)
endif()
