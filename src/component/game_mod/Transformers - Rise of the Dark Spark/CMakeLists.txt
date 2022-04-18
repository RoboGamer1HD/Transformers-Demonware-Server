file(GLOB_RECURSE TROTDS RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library("Transformers-Rise-of-the-Dark-Spark" SHARED
  ${TROTDS}
)

target_precompile_headers("Transformers-Rise-of-the-Dark-Spark"
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories("Transformers-Rise-of-the-Dark-Spark")
