

set(TEST_SOURCES tests_pile.cpp ${PROJECT_SOURCE_DIR}/Pile.h)

add_executable(
        test_pile
        ${TEST_SOURCES}
)

target_include_directories(test_pile PRIVATE ${PROJECT_SOURCE_DIR} )

target_link_libraries(
        test_pile
        gtest_main
        gtest
        pthread
)

include(GoogleTest)
gtest_discover_tests(test_pile)