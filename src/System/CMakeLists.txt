file(GLOB_RECURSE System RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_executable(System
  ${System}
)

target_precompile_headers(System
PRIVATE
  ../stdafx.hpp
)

target_add_virtual_directories(System)
