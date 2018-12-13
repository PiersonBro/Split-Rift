cmake_minimum_required(VERSION 3.0)

project(Split-Rift)
set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 11)
include_directories(AFTER PRIVATE headers)
file(GLOB split-rift-source 
	"source/*.cpp"
)
file(COPY ${CMAKE_CURRENT_SOURCE_DIR}/ForestStory.txt
     DESTINATION ${CMAKE_CURRENT_BINARY_DIR})

add_executable(main ${split-rift-source})
