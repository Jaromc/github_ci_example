cmake_minimum_required(VERSION 3.10)

project(Github_CI VERSION 1.0)

set (Project_SOURCES
        ${SOURCE_DIR}main.cpp
        ${SOURCE_DIR}application.cpp
    )

add_executable( Github_CI ${Project_SOURCES} )

add_executable(get_set_position test_set_position.cpp application.cpp)
enable_testing()

add_test(
  NAME get_set_position
  COMMAND $<TARGET_FILE:get_set_position>
  )