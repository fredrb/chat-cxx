cmake_minimum_required (VERSION 2.6) 
project (chatastrofic)

# set compiler flags
set(CPP_14 "-std=c++14")
set(WARN "-Wall")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${CPP_14}")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${WARN}")

#include diretory
set(INC app/include)
include_directories(${INC})
set(D app/src/cs)

add_library(action ${INC}/cs/core/action.h ${D}/core/action.cpp)
add_library(message ${INC}/cs/core/message.h ${D}/core/message.cpp)
add_library(network ${INC}/cs/core/network.h ${D}/core/network.cpp)
add_library(screen ${INC}/cs/core/screen.h ${D}/core/screen.cpp)
add_library(session ${INC}/cs/core/session.h ${D}/core/session.cpp)

target_link_libraries(screen network action)
target_link_libraries(screen message)
target_link_libraries(session screen)

set(HEADER 
    ${INC}/cs/core/action.h
    ${INC}/cs/core/messasge.h
    ${INC}/cs/core/screen.h
    ${INC}/cs/core/network.h
    ${INC}/cs/core/session.h
    ${INC}/cs/core/key.h
    )

set(SRC 
    ${D}/core/action.cpp
    ${D}/core/message.cpp
    ${D}/core/network.cpp
    ${D}/core/screen.cpp
    ${D}/core/session.cpp
    ${D}/program.cpp
    )


add_executable (program app/program.cpp) 

target_link_libraries(program session)

