file(GLOB DATA "*.cpp" "*.h")
source_group("data" FILES ${DATA})

include_directories(.)
add_library(data ${DATA})

set_property(TARGET data PROPERTY FOLDER "libs")

			

