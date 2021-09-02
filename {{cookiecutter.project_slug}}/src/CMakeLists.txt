file(GLOB FILES main.cpp **/*.cpp)

add_executable({{cookiecutter.project_slug}} ${FILES})

target_include_directories({{cookiecutter.project_slug}} PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
        )

target_link_libraries({{cookiecutter.project_slug}}
        pico_stdlib

        )
pico_add_extra_outputs({{cookiecutter.project_slug}})
