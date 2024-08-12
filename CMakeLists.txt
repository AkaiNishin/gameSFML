cmake_minimum_required(VERSION 3.20)

project(mGame CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

#Add packages to the project

find_package(SFML 2.6.1 COMPONENTS system window graphics network audio REQUIRED)
if (SFML_FOUND)
message(STATUS "SFML found")

else()
message(STATUS "SFML not found, fetching...")
include(FetchContent)
FetchContent_Declare(
    SFML
    GIT_REPOSITORY https://github.com/SFML/SFML.git
    GIT_TAG 2.6.1
)
FetchContent_MakeAvailable(SFML)

endif()

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/Include)
add_subdirectory(Source)

#build project
add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} PRIVATE 
    sfml-system
    sfml-window
    sfml-graphics
    sfml-network
    sfml-audio
    sources
)

