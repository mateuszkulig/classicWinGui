# This CMake includes all directories containing actual source files along with main module file

target_sources(cwg PRIVATE cwg.c)
add_subdirectory(backend)
add_subdirectory(display)
