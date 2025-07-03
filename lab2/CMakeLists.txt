cmake_minimum_required(VERSION 3.29)
project(lab2)

enable_testing()

# Google Test
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 17)

add_library(student_submission
        lab2_problem1_solution.cpp
)

# Compile tests
add_executable(run_lab2_tests
        tests/test_main.cpp
        tests/lab2_problem1_test.cpp
)

# Link tests against student code and gtest
target_link_libraries(run_lab2_tests
        student_submission
        GTest::GTest
        GTest::Main
        pthread
)

add_executable(main
        main.cpp
)

target_link_libraries(main
        student_submission
)

add_test(NAME lab2_tests COMMAND run_lab2_tests)