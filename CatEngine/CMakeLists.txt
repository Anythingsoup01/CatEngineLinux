cmake_minimum_required(VERSION 3.21)

project(CatEngine)

file(GLOB SOURCE_FILES src/**/*.cpp)
file(GLOB SOURCE_TWO_FILES src/**/**/*.cpp)

add_library(CatEngine STATIC ${SOURCE_FILES} ${SOURCE_TWO_FILES})

target_precompile_headers(CatEngine PRIVATE src/CatEngine/cepch.h)

# Local Includes

target_include_directories(CatEngine PRIVATE include ${PROJECT_SOURCE_DIR}/vendors/spdlog/include)
#target_include_directories(CatEngine PRIVATE include ${PROJECT_SOURCE_DIR}/vendors/glad/include)
target_include_directories(CatEngine PUBLIC include ${PROJECT_SOURCE_DIR}/src)
target_include_directories(CatEngine PUBLIC include ${PROJECT_SOURCE_DIR}/src/CatEngine) 

target_link_libraries(CatEngine glfw)
