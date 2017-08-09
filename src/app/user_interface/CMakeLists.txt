file(GLOB INTERFACE "*.cpp" "*.h")
source_group("user_interface" FILES ${INTERFACE})

include_directories("${PROJECT_SOURCE_DIR}/src/app/util")

add_library(user_interface ${INTERFACE})

target_link_libraries (user_interface util)

set_property(TARGET user_interface PROPERTY FOLDER "app")

			

