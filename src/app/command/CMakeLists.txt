file(GLOB COMMAND "*.cpp" "*.h")
source_group("command" FILES ${COMMAND})

include_directories("${PROJECT_SOURCE_DIR}/src/app/data")
include_directories("${PROJECT_SOURCE_DIR}/src/app/user_interface")
include_directories("${PROJECT_SOURCE_DIR}/src/domain")

add_library(command ${COMMAND})

target_link_libraries(command data)
target_link_libraries(command user_interface)

set_property(TARGET command PROPERTY FOLDER "app")

			

