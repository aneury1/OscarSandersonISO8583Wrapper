cmake_minimum_required(VERSION 3.15)

project(OscarSandersonISO8583Wrapper)

message("Project source dir: ${CMAKE_SOURCE_DIR}")

set(DEMO_PROJECT ${PROJECT_NAME}_demo)
set(BENCHMARK_PROJECT ${PROJECT_NAME}_benchmark)

file(GLOB SRCS "src/*.cpp" "src/*.c")
file(GLOB INCLUDES "src/*.h")

add_library(${PROJECT_NAME} STATIC ${SRCS} ${INCLUDES})

target_include_directories(${PROJECT_NAME}
    PUBLIC
    ${CMAKE_SOURCE_DIR}/includes
)

# Demo
file(GLOB DEMO_APP_SOURCES "demo/demo.c")
add_executable(${DEMO_PROJECT} ${DEMO_APP_SOURCES})
target_link_libraries(${DEMO_PROJECT} PRIVATE ${PROJECT_NAME})

# Benchmark
file(GLOB BENCHMARK_APP_SOURCES "demo/benchmark.c")
add_executable(${BENCHMARK_PROJECT} ${BENCHMARK_APP_SOURCES})
target_link_libraries(${BENCHMARK_PROJECT} PRIVATE ${PROJECT_NAME})
