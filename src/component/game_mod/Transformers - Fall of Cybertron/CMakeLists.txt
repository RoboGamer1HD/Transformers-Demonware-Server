file(GLOB_RECURSE TFOC RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library("Transformers-Fall-of-Cybertron" SHARED
  ${TFOC}
)

target_precompile_headers("Transformers-Fall-of-Cybertron"
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories("Transformers-Fall-of-Cybertron")
