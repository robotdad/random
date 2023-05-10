#include <catch2/catch_all.hpp>
#include <algorithm>

// Include the header where the `random_number` function is declared
#include "random.h"

TEST_CASE("Interface1", "[random_number]") {
    // Test case parameters
    int count = 10;
    int min_value = 1;
    int max_value = 100;

    // Call the function to generate random numbers
    std::vector<int> numbers = random_number(count, min_value, max_value);

    // Check the generated numbers count
    REQUIRE(numbers.size() == count);

    // Check the range of generated numbers
    for (int number : numbers) {
        REQUIRE(number >= min_value);
        REQUIRE(number <= max_value);
    }

    // Check for uniqueness of generated numbers
    std::sort(numbers.begin(), numbers.end());
    REQUIRE(std::unique(numbers.begin(), numbers.end()) == numbers.end());
}
