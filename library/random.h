#ifndef RANDOM_NUMBER_H
#define RANDOM_NUMBER_H

#include <random>

std::vector<int> random_number(int count, int min_value, int max_value);
std::vector<int> random_number(int count, int min_value, int max_value, unsigned int seed);

#endif // RANDOM_NUMBER_H
