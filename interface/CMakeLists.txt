file(GLOB INTERFACE "*.cpp" "*.h")
source_group("interface" FILES ${INTERFACE})

include_directories("${PROJECT_SOURCE_DIR}/util")

add_library(interface ${INTERFACE})

target_link_libraries (interface util)

set_property(TARGET interface PROPERTY FOLDER "libs")

			

