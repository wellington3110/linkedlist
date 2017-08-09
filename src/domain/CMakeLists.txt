file(GLOB DOMAIN "*.cpp" "*.h")
source_group("domain" FILES ${DOMAIN})

add_library(linked_list ${DOMAIN})

set_property(TARGET linked_list PROPERTY FOLDER "domain")

			

