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
        MyLib
        ${CONAN_LIBS}
)