project(aoc2020_test)

add_executable(
    ${PROJECT_NAME}
    main_test.cpp
    ../src/Day01/Day01.cpp
    ../src/Day02/Day02.cpp
    ../src/Day03/Day03.cpp
    ../src/Day04/Day04.cpp
    ../src/Day05/Day05.cpp
    ../src/Day06/Day06.cpp
    ../src/Day07/Day07.cpp
    ../src/Day08/Day08.cpp
    ../src/Day09/Day09.cpp
    ../src/Day10/Day10.cpp
    ../src/Day11/Day11.cpp
    ../src/Day12/Day12.cpp
    ../src/Day13/Day13.cpp
    ../src/Day14/Day14.cpp
    ../src/Day15/Day15.cpp
)

target_link_libraries(
    ${PROJECT_NAME}
    ${CONAN_LIBS}
)

include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                   COMMAND ${CMAKE_COMMAND} -E copy_directory
                       ${CMAKE_CURRENT_SOURCE_DIR}/input $<TARGET_FILE_DIR:${PROJECT_NAME}>/input)
