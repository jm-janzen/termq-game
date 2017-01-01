cmake_minimum_required(VERSION 2.8.12)

project (termq_game)

enable_language(CXX)

# Build termq-engine lib
#include_directories("termq-engine" REQUIRED)
add_subdirectory(termq-engine)

# Build termq-game source
#include_directories("game" REQUIRED)
add_subdirectory(game)

#set(header_files "term-engine/inc/*.h")
file(GLOB_RECURSE lib_inc *.h)

#target_link_libraries(termq_game termq_lib)

