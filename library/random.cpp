#include "random.h"

// Generate random numbers using the default algorithm and seed
std::vector<int> random_number(int count, int min_value, int max_value) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> distrib(min_value, max_value);

    std::vector<int> numbers(count);
    for (int i = 0; i < count; ++i) {
        numbers[i] = distrib(gen);
    }

    return numbers;
}

// Generate random numbers using a specified seed
std::vector<int> random_number(int count, int min_value, int max_value, unsigned int seed) {
    std::mt19937 gen(seed);
    std::uniform_int_distribution<int> distrib(min_value, max_value);

    std::vector<int> numbers(count);
    for (int i = 0; i < count; ++i) {
        numbers[i] = distrib(gen);
    }

    return numbers;
}