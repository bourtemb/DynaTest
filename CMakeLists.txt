cmake_minimum_required(VERSION 3.18...3.26 FATAL_ERROR)

project(DynaTest LANGUAGES CXX
        VERSION 3.0)

find_package(Tango REQUIRED)

if(NOT DEFINED CMAKE_CXX_STANDARD)
    set(CMAKE_CXX_STANDARD 17)
endif()

set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_STANDARD_REQUIRED YES)

set(SOURCES
        ClassFactory.cpp
        DynaTest.cpp
        DynaTestClass.cpp
        DynaTestDynAttrUtils.cpp
        DynaTestStateMachine.cpp
        main.cpp)

set(HEADERS
        DynaTest.h
        DynaTestClass.h)

set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_library(DynaTestObjects OBJECT ${SOURCES} ${HEADERS})
target_link_libraries(DynaTestObjects PRIVATE Tango::Tango)
target_include_directories(DynaTestObjects PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

add_executable(${PROJECT_NAME} $<TARGET_OBJECTS:DynaTestObjects>)
target_link_libraries(${PROJECT_NAME} PRIVATE Tango::Tango)

install(TARGETS ${PROJECT_NAME} RUNTIME DESTINATION bin)

if (WIN32 AND (Tango_IS_STATIC OR Tango_FORCE_STATIC))
    set_target_properties(${PROJECT_NAME} DynaTestObjects
      PROPERTIES MSVC_RUNTIME_LIBRARY "MultiThreaded$<$<CONFIG:Debug>:Debug>"
    )
endif()

option(TANGO_WARNINGS_AS_ERRORS "Treat compiler warnings as errors" OFF)

if(TANGO_WARNINGS_AS_ERRORS)
  target_compile_options(${PROJECT_NAME} PUBLIC -Werror -Wall -Wextra -Wformat -Werror=format-security -pedantic)
endif()
