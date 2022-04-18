file(GLOB_RECURSE TDOTM RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library("Transformers-Dark-of-the-Moon" SHARED
  ${TDOTM}
)

target_precompile_headers("Transformers-Dark-of-the-Moon"
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories("Transformers-Dark-of-the-Moon")
