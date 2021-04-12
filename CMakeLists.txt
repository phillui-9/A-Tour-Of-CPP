cmake_minimum_required(VERSION 3.14)
project(ATourOfCPP VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
add_definitions(-D_UNICODE -D_CRT_SECURE_NO_WARNINGS)
set(CMAKE_CONFIGURATION_TYPES "Debug;Release;MinSizeRel;RelWithDebInfo")

if(WIN32)
    set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/ATourOfCPP")
    include_directories(ATourOfCPP PUBLIC
        "include"
    )
endif(WIN32)

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    set(CMAKE_INSTALL_PREFIX "~/ATourOfCPP")
    include_directories(AToutOfCPP PUBLIC
        "include"
        "/usr/local/includ"
        "/usr/include"
        "~/include"
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")

if(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
    set(CMAKE_INSTALL_PREFIX "~/ATourOfCPP")
    include_directories(ATourOfCPP PUBLIC
        "include"
        "~/include"
        "/usr/local/include"
    )
endif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")

set(CMAKE_VERBOSE_MAKEFILE True)

add_library(LibsModule
    src/common/util.cpp
)
link_libraries(LibsModule)

add_executable(main src/main.cpp)