file(GLOB COMMAND "*.cpp" "*.h")
source_group("command" FILES ${COMMAND})

include_directories("${PROJECT_SOURCE_DIR}/data")
include_directories("${PROJECT_SOURCE_DIR}/interface")

add_library(command ${COMMAND})

target_link_libraries (command data)
target_link_libraries (command interface)

set_property(TARGET command PROPERTY FOLDER "libs")

			

