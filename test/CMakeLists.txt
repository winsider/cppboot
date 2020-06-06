cmake_minimum_required(VERSION 3.15)
include(AddGoogleTest) # Could be in /tests/CMakeLists.txt
add_executable(test_{PROJECT_NAME} test_{PROJECT_NAME}.cpp)
target_link_libraries(test_{PROJECT_NAME} gtest gtest_main lib{PROJECT_NAME})
install(TARGETS test_{PROJECT_NAME} RUNTIME DESTINATION bin)

add_test(
	NAME test_{PROJECT_NAME}
	COMMAND test_{PROJECT_NAME}
)

