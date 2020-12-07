project(SimpleApp)
cmake_minimum_required(VERSION 3.12)
set(CMAKE_CXX_STANDARD 20)

# this is needed for the cmake conan files that
# get generated
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# initialize conan libs
include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup(NO_OUTPUT_DIRS KEEP_RPATHS)

set(SOURCE_FILES
    main.cpp
)

set(HEADER_FILES
)

add_executable("${CMAKE_PROJECT_NAME}"
    ${SOURCE_FILES}
    ${HEADER_FILES}
)

target_link_libraries("${CMAKE_PROJECT_NAME}"
    PUBLIC
        ${CONAN_LIBS}
)