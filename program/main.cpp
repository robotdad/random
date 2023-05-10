//#include <iostream>
#include "CLI/CLI.hpp"
#include "random.h"

int main(int argc, char** argv) {
    CLI::App app{ "Random Number Generator" };

    int count, min_value, max_value;
    app.add_option("-c,--count", count, "Number of random numbers")->required();
    app.add_option("--min", min_value, "Minimum value")->required();
    app.add_option("--max", max_value, "Maximum value")->required();

    CLI11_PARSE(app, argc, argv);

    std::vector<int> numbers = random_number(count, min_value, max_value);

    std::cout << count << " random numbers between " << min_value << " and " << max_value << ": " << std::endl;
    for (int number : numbers) {
        std::cout << number << std::endl;
    }
    std::cout << std::endl << "Done" << std::endl;

    return 0;
}
