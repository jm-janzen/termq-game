cmake_minimum_required(VERSION 2.8.12)

project (termq_game)

enable_language(CXX)

# Build termq-engine lib
include_directories("termq-engine" REQUIRED)
add_subdirectory(termq-engine)
install(EXPORT termq_lib-targets DESTINATION lib/termq_game)

# Build termq-game source
include_directories("game" REQUIRED)
add_subdirectory(game)

#target_link_libraries(termq_game lib/termq_lib)

