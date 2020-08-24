#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "../include/placeholder.h"

TEST(PlaceholderTest, should_return_2_when_sum_1_and_1) {
    int got = Placeholder::Sum(1, 1);

    EXPECT_THAT(got, testing::Eq(2));
}