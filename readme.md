# FreeRTOS POSIX CMAKE example

## Description

This app is a simple playground to newbie experiments with FreeRTOS based on POSIX port with VSCode.

## Requirements

- CMAKE 3.8
- VS Code
- VS Code C/C++ extension by Microsoft

## Bootstrap

Run in project root for create cmake files from cmake source (```-S .```) at './build' directory (```-B build```) and 'Debug' configuration (```-DCMAKE_BUILD_TYPE=Debug```).
```
cmake -S . -B build -DCMAKE_BUILD_TYPE=Debug
```
This command will install FreeRTOS files.

## Build

Run
```
cmake --build build
```

## VS Code integration

- Build task: 'C++ Build'. Build all files with CMake
- Launch config 'C++ Launch'. Run build task 'C++ Build', start output executable and attach debugger
