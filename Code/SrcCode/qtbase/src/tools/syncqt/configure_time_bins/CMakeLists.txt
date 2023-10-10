cmake_minimum_required(VERSION 3.16)

project(syncqt LANGUAGES CXX)

set(packages "")
set(defines QT_VERSION_STR="6.5.2";QT_VERSION_MAJOR=6;QT_VERSION_MINOR=5;QT_VERSION_PATCH=2;QT_NAMESPACE="")
set(compile_options -O3)
set(link_options )
set(output_directory F:/qt-everywhere-src-6.5.2/qtbase/bin)

foreach(package IN LISTS packages)
    find_package(${package} REQUIRED)
endforeach()

add_executable(syncqt   F:/qt-everywhere-src-6.5.2/qtbase/src/tools/syncqt/main.cpp)
set_target_properties(syncqt PROPERTIES
    INCLUDE_DIRECTORIES ""
    RUNTIME_OUTPUT_DIRECTORY "${output_directory}"
)

target_compile_options(syncqt PRIVATE ${compile_options})
target_compile_definitions(syncqt PRIVATE ${defines})
target_link_options(syncqt PRIVATE ${link_options})
