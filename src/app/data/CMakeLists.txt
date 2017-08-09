file(GLOB DATA "*.cpp" "*.h")
source_group("data" FILES ${DATA})

include_directories("${PROJECT_SOURCE_DIR}/src/domain")
add_library(data ${DATA})

target_link_libraries(data linked_list)

set_property(TARGET data PROPERTY FOLDER "app")

			

