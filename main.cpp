#include "Func.h"

int main() {
    int inputNumber;

    std::cout << "Enter a six-digit number: ";
    std::cin >> inputNumber;

    if (inputNumber >= 100000 && inputNumber <= 999999) {
        if (isLuckyNumber(inputNumber)) {
            std::cout << "The number is a lucky number!" << std::endl;
        }
        else {
            std::cout << "The number is not a lucky number." << std::endl;
        }
    }
    else {
        std::cout << "Please enter a valid six-digit number." << std::endl;
    }

    return 0;
}
