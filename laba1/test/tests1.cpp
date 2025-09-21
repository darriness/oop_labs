#include <gtest/gtest.h>
#include "../function.h"

TEST(test_01, basic_test_set)
{
    ASSERT_TRUE(find_num(10, 50) == 50);
}

TEST(test_02, basic_test_set)
{
    ASSERT_TRUE(find_num(3, 10) == 9);
}

TEST(test_03, basic_test_set)
{
    ASSERT_TRUE(find_num(7, 5) == -1);
}

TEST(test_04, basic_test_set)
{
    ASSERT_TRUE(find_num(100, 999) == 900);
}

int main(int argc, char **argv){
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
