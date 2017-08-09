file(GLOB UTIL "*.cpp" "*.h")
source_group("util" FILES ${UTIL})

add_library(util ${UTIL})

set_property(TARGET util PROPERTY FOLDER "app")

			

