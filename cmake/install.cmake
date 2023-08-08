set(CMAKE_INSTALL_PREFIX ${PROJECT_BINARY_DIR}/install/)

if(WIN32)
	set(LDataStruct_INSTALL_PREFIX "windows")
elseif(APPLE)
	set(LDataStruct_INSTALL_PREFIX "macos")
elseif(UNIX)
	set(LDataStruct_INSTALL_PREFIX "linux")
endif()

install(TARGETS ${output_name_dynamic} 
		RUNTIME DESTINATION  ${LDataStruct_INSTALL_PREFIX}/x64/bin/$<IF:$<CONFIG:DEBUG>,Debug,Release>
		ARCHIVE DESTINATION  ${LDataStruct_INSTALL_PREFIX}/x64/lib
		PUBLIC_HEADER DESTINATION  ${LDataStruct_INSTALL_PREFIX}/include
		FRAMEWORK DESTINATION ${LDataStruct_INSTALL_PREFIX}/Frameworks)

