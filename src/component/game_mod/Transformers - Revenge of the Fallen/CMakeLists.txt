file(GLOB_RECURSE TROTF RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} *.cpp *.hpp)

add_library("Transformers-Revenge-of-the-Fallen" SHARED
  ${TROTF}
)

target_precompile_headers("Transformers-Revenge-of-the-Fallen"
PRIVATE
  ../../../stdafx.hpp
)

target_add_virtual_directories("Transformers-Revenge-of-the-Fallen")
