message("entering game/")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

include_directories("src" REQUIRED)
add_subdirectory(src)

add_executable(termq_game src/main.cpp)


target_link_libraries(termq_game termq_lib)
