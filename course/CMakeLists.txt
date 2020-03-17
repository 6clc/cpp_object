set(base_SRCs
    complex.cpp
)

add_library(course ${base_SRCs})
# 链接线程包pthread
target_link_libraries(course pthread rt)
install(TARGETS course DESTINATION lib)
# 把muduo_base安装在工程目录的lib子目录下

file(GLOB HEADERS ".h")
# 收集文件，存储在HEADERS中
install(FILES ${HEADERS} DESTINATION include/course)

add_subdirectory(tests)