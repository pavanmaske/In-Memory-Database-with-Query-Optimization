cmake_minimum_required(VERSION 3.10)
project(InMemoryDB)

set(CMAKE_CXX_STANDARD 17)

add_executable(db_main src/main.cpp src/storage.cpp src/bptree.cpp src/query_engine.cpp src/transaction.cpp src/cache.cpp)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()
add_subdirectory(tests)
