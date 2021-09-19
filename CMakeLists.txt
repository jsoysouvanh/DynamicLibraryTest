cmake_minimum_required(VERSION 3.13.5)

project(DynamicLibrary)

# Enable tests
enable_testing()

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON) #TODO: Try without this too

# Information messages about cmake version and compiler
message("Cmake:		${CMAKE_VERSION}")
message("Compiler:	${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")

# Main library
add_library(DynamicLibAPI
				SHARED
					Database.cpp
					Entity.cpp
					EntityRegisterer.cpp
					SomeProperty.cpp)

# Setup compilation flags
if (MSVC)
	string(REGEX REPLACE "/W[0-4]" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")	# Replace the default flag /W3 by /W4
	string(REGEX REPLACE "/GR" "/GR-" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")		# Replace the default flag /GR by /GR- to disable RTTI
else()	# Clang or GCC
	target_compile_options(DynamicLibAPI PRIVATE -Wall -Wextra -Wpedantic -fno-rtti)
endif()

target_compile_features(DynamicLibAPI PUBLIC cxx_std_17)
target_compile_definitions(DynamicLibAPI PRIVATE REFUREKU_EXPORT)

target_include_directories(DynamicLibAPI PUBLIC Include)

# Second library
add_library(GameLibrary
				SHARED
					GameplayScript.cpp
					GameplayScript2.cpp)
target_compile_definitions(GameLibrary PRIVATE GAME_EXPORT)
target_link_libraries(GameLibrary PUBLIC DynamicLibAPI)


# Executable
add_executable(Executable main.cpp)
target_link_libraries(Executable PRIVATE GameLibrary DynamicLibAPI)

add_test(NAME TestMain COMMAND Executable)