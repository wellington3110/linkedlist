file(GLOB MAIN "*.cpp" "*.h")
source_group("main" FILES ${MAIN})

include_directories("${PROJECT_SOURCE_DIR}/src/app/data")
include_directories("${PROJECT_SOURCE_DIR}/src/domain")
include_directories("${PROJECT_SOURCE_DIR}/src/app/user_interface")
include_directories("${PROJECT_SOURCE_DIR}/src/app/command")

add_executable(main ${MAIN}) 

target_link_libraries (main user_interface)
target_link_libraries (main data)
target_link_libraries (main command)
target_link_libraries (main linked_list)

set_property(TARGET main PROPERTY FOLDER "app")

			

