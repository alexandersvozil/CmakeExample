cmake_minimum_required(VERSION 3.10)

# set the project name
project(bInt)

set(CMAKE_CXX_STANDARD 20)

set(SOURCES
  src/bigint.cpp
  src/driver.cpp
  )

#
#add the executable
add_executable(bInt ${SOURCES})

target_include_directories(bInt PRIVATE ${PROJECT_SOURCE_DIR}/include)
