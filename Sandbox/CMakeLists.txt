cmake_minimum_required(VERSION 3.21)

project(Sandbox)

file(GLOB SOURCE_FILES src/*.cpp)

add_executable(SandboxApp ${SOURCE_FILES})


# External Includes

target_include_directories(SandboxApp PRIVATE include ${CMAKE_SOURCE_DIR}/CatEngine/src/CatEngine)
target_include_directories(SandboxApp PRIVATE include ${CMAKE_SOURCE_DIR}/CatEngine/vendors/spdlog/include)
#target_include_directories(SandboxApp PRIVATE include ${CMAKE_SOURCE_DIR}/CatEngine/vendors/glad/include)

target_link_libraries(SandboxApp CatEngine)

