#include <gtest/gtest.h>
#include "mult.h"

TEST(MultTest, HandlesPositiveInput)
{
    int producto = mult(4, 7);

    EXPECT_EQ(producto, 28);
}

TEST(MultTest, HandlesZeroInput)
{
    int producto = mult(5, 0);

    EXPECT_EQ(producto, 0);
}

TEST(MultTest, HandlesNegativeInput)
{
    int producto = mult(-3, 4);

    EXPECT_EQ(producto, -12);
}