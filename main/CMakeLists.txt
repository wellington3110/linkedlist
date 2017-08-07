include_directories ("${PROJECT_SOURCE_DIR}/app")
add_executable (main main.cpp)
target_link_libraries (main app)
set_property(TARGET main PROPERTY FOLDER "executables")
set_target_properties(main PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)

