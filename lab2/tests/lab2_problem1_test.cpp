#include <gtest/gtest.h>
#include "../lab2_problem1.h"

TEST(DiagonalStars, DiagonalStarsNegativeNumber) {
    EXPECT_EQ(" * ", diagonalStars(4));
}