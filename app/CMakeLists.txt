file(GLOB APP "*.cpp" "*.h")
source_group("app" FILES ${APP})

include_directories("${PROJECT_SOURCE_DIR}/data")
include_directories("${PROJECT_SOURCE_DIR}/interface")
include_directories("${PROJECT_SOURCE_DIR}/command")

add_library(app ${APP})

target_link_libraries (app interface)
target_link_libraries (app data)
target_link_libraries (app command)

set_property(TARGET app PROPERTY FOLDER "libs")

			

