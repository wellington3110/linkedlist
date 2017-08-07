file(GLOB UTIL "*.cpp" "*.h")
source_group("util" FILES ${UTIL})

include_directories(.)
add_library(util ${UTIL})

set_property(TARGET util PROPERTY FOLDER "libs")

			

