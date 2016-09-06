#include <gtest/gtest.h>
#include "exercises.c"


TEST(ExercisesTestSuite, AddUnit)
{
    EXPECT_EQ(4, add(3, 1));
}

TEST(ExercisesTestSuite, test_check)
{
    EXPECT_EQ(1, check(3, 1, 5));
    EXPECT_EQ(0, check(6, 1, 5));
    EXPECT_EQ(0, check(-1, 1, 5));
    EXPECT_EQ(0, check(3, 6, 5));
    EXPECT_EQ(0, check(1, -1, 5));
}

TEST(ExercisesTestSuite, test_gcd)
{
    EXPECT_EQ(6, findGCD(24, 30));
    EXPECT_EQ(1, findGCD(27, 31));
    EXPECT_EQ(6, findGCD(-24, 30));
}

TEST(ExercisesTestSuite, test_num_digits)
{
    EXPECT_EQ(9, numDigits(124562349));
    EXPECT_EQ(1, numDigits(0));
}

TEST(ExercisesTestSuite, test_max)
{
    int arr[7] = {3, 4, 12, 8, 239, 55, 87};
    EXPECT_EQ(239, max(7, arr));
}

TEST(ExercisesTestSuite, test_max)
{
    int arr[7] = {3, 4, 12, 8, 239, 55, 87};
    EXPECT_EQ(239, max(7, arr));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

