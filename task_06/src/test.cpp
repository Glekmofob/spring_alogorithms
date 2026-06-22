#include <gtest/gtest.h>
#include "solution.hpp"
TEST(Fish, Basic1) {
    std::vector<int> prices = {5};
    ASSERT_EQ(5, calcCost(1, 1, prices));
}
TEST(Fish, Basic2) {
    std::vector<int> prices = {5, 3, 4};
    // 5 + 3 + 4 = 12
    ASSERT_EQ(12, calcCost(3, 1, prices));
}
TEST(Fish, Basic3) {
    std::vector<int> prices = {5, 3, 4};
    ASSERT_EQ(11, calcCost(3, 3, prices));
}

TEST(Fish, Decreasings) {
    std::vector<int> prices = {10, 9, 8, 7};
    int k = 2;
    ASSERT_EQ(34, calcCost(4, 2, prices));
}