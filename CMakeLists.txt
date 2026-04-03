add_library(MaterialLib 
    source/MaterialManager.cpp
)


target_link_libraries(MaterialLib
    PUBLIC         
        ResourceManagerBaseLib
    PRIVATE 
        TypeLib
        AssetsLib
)

target_include_directories(MaterialLib 
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/source
)