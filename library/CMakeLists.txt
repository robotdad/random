add_library(random SHARED random.cpp random.h)

set_target_properties(random PROPERTIES WINDOWS_EXPORT_ALL_SYMBOLS TRUE)
target_include_directories(random PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
install(TARGETS random
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        RUNTIME DESTINATION bin)

install(FILES random.h DESTINATION include)
