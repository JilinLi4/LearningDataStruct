file(GLOB src_Graph source/Graph/*.*)
file(GLOB src_LinkedList source/LinkedList/*.*)
file(GLOB src_Queue source/Queue/*.*)
file(GLOB src_SequenceList source/SequenceList/*.*)
file(GLOB src_Sort source/Sort/*.*)
file(GLOB src_Stack source/Stack/*.*)
file(GLOB src_Tree source/Tree/*.*)

if(MSVC)
    set(VERSIONINFO_RC "${CMAKE_BINARY_DIR}/LDataStruct.rc")
    configure_file("${CMAKE_SOURCE_DIR}/source/LDataStruce.rc.in"
                   "${VERSIONINFO_RC}")
endif()
