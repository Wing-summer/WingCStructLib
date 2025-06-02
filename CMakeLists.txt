cmake_minimum_required(VERSION 3.16)

project(WingCStructLib LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

if(MSVC)
    string(APPEND CMAKE_CXX_FLAGS " /utf-8")
    string(APPEND CMAKE_C_FLAGS " /utf-8")
endif()

if(NOT TARGET antlr4-cpp)
    set(DISABLE_WARNINGS ON)
    set(ANTLR4_INSTALL OFF)
    set(ANTLR_BUILD_CPP_TESTS OFF)
    set(ANTLR_BUILD_SHARED OFF)
    set(ANTLR_BUILD_STATIC ON)
    set(WITH_STATIC_CRT OFF)
    add_subdirectory(antlr4-cpp)
endif()

set(CDES_PARSER
    c/CStructVisitor.cpp
    c/CStructVisitor.h
    c/CStructLexer.cpp
    c/CStructParser.cpp
    c/CStructVisitor.cpp
    c/CStructVisitor.h
    c/CStructLexer.h
    c/CStructParser.h)

add_library(
    WingCStructLib STATIC ${CDES_PARSER} ctypeparser.cpp ctypeparser.h
                          cstructvisitorparser.h cstructvisitorparser.cpp
                          define.h)

target_include_directories(WingCStructLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")
target_link_libraries(WingCStructLib PRIVATE Qt${QT_VERSION_MAJOR}::Core
                                             antlr4_static)
target_compile_definitions(WingCStructLib PRIVATE QT_NO_EMIT WORDSIZE=${CMAKE_SIZEOF_VOID_P})

add_subdirectory(TestCStruct)
