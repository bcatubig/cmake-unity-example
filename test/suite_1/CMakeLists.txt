add_executable(suite_1_app
  suite_1.c
)

target_link_libraries(suite_1_app
  hello
  Unity
)

add_test(suite_test_1 suite_1_app)
