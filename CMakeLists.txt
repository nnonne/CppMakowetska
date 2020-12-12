cmake_minimum_required(VERSION 3.19)

project(Makowetska LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_BUILD_TYPE Debug)

add_executable(Makowetska
    main.cpp
    Quaternion_test.cpp
    Point3D_test.cpp
    Figure3D_Makowetska.h Figure3D_Makowetska.cpp
    Point3D_Makowetska.h Point3D_Makowetska.cpp
    Angle3D_Makowetska.h
    Quaternion_Makowetska.h Quaternion_Makowetska.cpp
    Spheric.h
    Cylindric.h
)
