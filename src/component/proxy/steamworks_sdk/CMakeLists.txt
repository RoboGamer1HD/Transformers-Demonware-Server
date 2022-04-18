file(GLOB_RECURSE steamworks_sdk RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library(steamworks_sdk STATIC
  ${steamworks_sdk}
)

target_precompile_headers(steamworks_sdk
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories(steamworks_sdk)
