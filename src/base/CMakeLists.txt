###############################################################################
# Source files
SET( srcs 
		libbusex_base.cpp
		)
		
###############################################################################
# Headers
SET( headers
		${libbusex_SOURCE_DIR}/include/base/libbusex_base.h
		)
		
add_library(libbusex_base STATIC ${srcs} ${headers})
set_target_properties(libbusex_base PROPERTIES FOLDER libbusex)