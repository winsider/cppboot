cmake_minimum_required(VERSION 3.15)

add_library(lib{PROJECT_NAME} STATIC 
    {PROJECT_NAME}.cpp
)

target_include_directories(lib{PROJECT_NAME}
PUBLIC 
    $<INSTALL_INTERFACE:include>    
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
PRIVATE
    ${PROJECT_SOURCE_DIR}/src
)

target_compile_features(lib{PROJECT_NAME} PRIVATE cxx_std_14)
