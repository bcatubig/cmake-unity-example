#include <hello.h>
#include <unity.h>

void setUp(void) {}
void tearDown(void) {}

void test_say_hello(void) {
  TEST_ASSERT_EQUAL_STRING("Hello, John!", say_hello("Brandon"));
}

int main(void) {
  UNITY_BEGIN();
  RUN_TEST(test_say_hello);
  return UNITY_END();
}
