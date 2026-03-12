add_library(adapters 
    ./RMTAdapter.cpp
)
target_include_directories(adapters PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})