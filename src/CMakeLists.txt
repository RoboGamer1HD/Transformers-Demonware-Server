include_directories(.
  "../external/detours/include"
)

link_directories(
  "../external/detours/lib"
)



add_definitions(
  /FI"stdafx.hpp"
)

add_compile_options(
  /MP # Enables parallel (aka multiprocessor, aka multi-core) builds
)

add_subdirectory(System)
add_subdirectory(component)
