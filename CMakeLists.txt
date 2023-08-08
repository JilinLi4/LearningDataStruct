cmake_minimum_required(VERSION 3.0)
set(AppName LearnDataStruct)
project(${AppName} VERSION 1.0.32.0 LANGUAGES CXX)

set(output_name_dynamic LDataStruct)
set(output_name_sample  LDataStructTester)

#############################  source files #############################
include(cmake/source.cmake)

#############################  add_library #############################
add_library(${output_name_dynamic} SHARED 
            # ${src_Graph} 
            # ${src_LinkedList} 
            # ${src_Queue} 
            # ${src_SequenceList}
            # ${src_Sort}
            ${src_Stack}
            # ${src_Tree}
)
target_compile_definitions(${output_name_dynamic} PUBLIC -DPI_API_EXPORTS)

#################################  install #################################
include(cmake/install.cmake)

#################################  Tester  #################################

add_executable(${output_name_sample} source/LDSTestter.cpp)

set_target_properties(${output_name_sample} PROPERTIES CXX_STANDARD_REQUIRED ON)
set_target_properties(${output_name_sample} PROPERTIES CXX_STANDARD 17)

target_include_directories(${output_name_sample} PRIVATE
	${src_Stack}
)

target_link_libraries(${output_name_sample} ${output_name_dynamic})




