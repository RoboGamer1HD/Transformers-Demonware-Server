file(GLOB_RECURSE demonware RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library(demonware STATIC
  ${demonware}
)

target_precompile_headers(demonware
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories(demonware)
