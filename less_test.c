#include "Unity/src/unity.h"

void setUp(void)
{
    return;
}

void tearDown(void)
{
    return;
}

void test_ok(void);

void test_ok(void)
{
    TEST_ASSERT_EQUAL_STRING("ok", "ok");

    return;
}

int main(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_ok);

    return UNITY_END();
}
