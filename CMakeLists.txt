cmake_minimum_required(VERSION 3.14)
project(illness-project)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/tags/release-1.12.1.zip 
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  illness-tests   
  test.cpp       
  Diseases.cpp
)

target_link_libraries(
  illness-tests
  PRIVATE GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(illness-tests)