#include "Func.h"

int main() {
    double base;
    int exponent;

    std::cout << "Enter the base: ";
    std::cin >> base;

    std::cout << "Enter the exponent: ";
    std::cin >> exponent;

    double result = power(base, exponent);

    std::cout << "Result: " << result << std::endl;

    return 0;
}
