cmake_minimum_required(VERSION 3.20)
project(game)

set(CMAKE_CXX_STANDARD 17)

# Specify the required components here
find_package(SFML 3 CONFIG REQUIRED COMPONENTS Graphics Window System)

add_executable(ans main.cpp)
add_executable(eigen 001Eigen.cpp)
add_executable(game recursion.cpp)

# Link against the individual components
target_link_libraries(ans
    PRIVATE
        SFML::Graphics
        SFML::Window
        SFML::System
)

target_include_directories(eigen 
    PRIVATE
        /Users/root1/Downloads/eigen

)