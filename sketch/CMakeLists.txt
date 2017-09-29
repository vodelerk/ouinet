cmake_minimum_required (VERSION 3.5)
project(ouinet)



set(LIBRARY_SOURCES
	# library/client.cpp
	# library/hiddenservice.cpp
)

set(LIBRARY_HEADERS
	library/client.h
	library/hiddenservice.h
	library/hiddenservice/implementation.h
)

add_library(ouinet ${LIBRARY_SOURCES}) #SHARED



set(INJECTOR_SOURCES
	injector/main.cpp
)

add_executable(ouinet-injector ${INJECTOR_SOURCES})
target_link_libraries(ouinet-injector ouinet)

