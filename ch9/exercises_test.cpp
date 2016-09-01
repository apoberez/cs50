#include <gtest/gtest.h>
#include "exercises.c"


TEST(ExercisesTestSuite, AddUnit)
{
    EXPECT_EQ(4, add(3, 1));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

