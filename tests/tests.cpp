#include <gtest/gtest.h>
#include <vector>

// Include the header file containing the random_number function
#include "random.h"

// Test case for random_number
TEST(RandomNumberTest, GeneratesNumbersInRange) {
    std::vector<int> numbers = random_number(10, 1, 100);

    // Add your assertions to validate the generated numbers
    ASSERT_EQ(numbers.size(), 10);
    for (int num : numbers) {
        ASSERT_GE(num, 1);
        ASSERT_LE(num, 100);
    }
}

// Run all the tests
//int main(int argc, char** argv) {
//    testing::InitGoogleTest(&argc, argv);
//    return RUN_ALL_TESTS();
//}
