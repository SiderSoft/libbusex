###############################################################################
# Source files
SET( srcs 
		libbusex_core.cpp
		publisher.cpp
		subscriber.cpp
		)
		
add_library(libbusex_core STATIC ${srcs})
set_target_properties(libbusex_core PROPERTIES FOLDER libbusex)