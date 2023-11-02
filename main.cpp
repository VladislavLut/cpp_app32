#include "Func.h"

int main() {
    int num1, num2;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    int result = sumInRange(num1, num2);

    std::cout << "Sum of numbers in the range: " << result << std::endl;

    return 0;
}
