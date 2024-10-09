# Specify the minimum version of CMake required
cmake_minimum_required(VERSION 3.10)

# Define the project name and the version
project(Car-Rental VERSION 1.0)

# Set the C++ standard to C++11 (or higher, e.g., 17 or 20)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include all source files
# GLOB finds all .cpp files in the specified directories
file(GLOB SOURCES 
    "${PROJECT_SOURCE_DIR}/ConsoleApp/*.cpp"
    "${PROJECT_SOURCE_DIR}/Domain/*.cpp"
)

# Add the executable to be built from the source files
add_executable(Application ${SOURCES})
