cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# Include FetchContent module
include(FetchContent)

# Set up Catch2 as a dependency
FetchContent_Declare(
  Catch2
  GIT_REPOSITORY https://github.com/catchorg/Catch2.git
  GIT_TAG v3.4.0 # Use the latest stable version
)

FetchContent_MakeAvailable(Catch2)

# Add the executable for the main application
add_executable(main_app main.cpp func.cpp)

# Add the executable for tests
add_executable(tests test.cpp func.cpp)

# Link Catch2 with the test executable
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# Enable testing
enable_testing()
add_test(NAME tests COMMAND tests)