add_executable(main main.c)

target_link_libraries(main
  hello
)

target_include_directories(main PUBLIC
  "${CMAKE_CURRENT_BINARY_DIR}/.."
)
