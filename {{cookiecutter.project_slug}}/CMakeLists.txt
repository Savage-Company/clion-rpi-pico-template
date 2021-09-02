cmake_minimum_required(VERSION 3.17)

include(pico_sdk_import.cmake)
pico_sdk_init()

project({{cookiecutter.project_slug}})

add_subdirectory(./src)
