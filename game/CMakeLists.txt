message("entering game/")

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(src)

add_executable(termq_game src/main.cpp)

target_include_directories(termq_game PUBLIC "${PROJECT_SOURCE_DIR}/termq-engine/inc")

message("Linking game engine lib and game source")

target_link_libraries(termq_game termq_lib)
