###############################################################################
# Source files
SET( srcs 
		main.cpp
		)
		
add_executable(busex_demo ${srcs})
target_link_libraries(busex_demo libbusex_base libbusex_core)
#add_dependencies(busex_demo libbusex_base libbusex_core)
set_target_properties(busex_demo PROPERTIES FOLDER examples)