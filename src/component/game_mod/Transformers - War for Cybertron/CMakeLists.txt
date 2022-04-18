file(GLOB_RECURSE TWFC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library("Transformers-War-for-Cybertron" SHARED
  ${TWFC}
)

target_precompile_headers("Transformers-War-for-Cybertron"
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories("Transformers-War-for-Cybertron")
