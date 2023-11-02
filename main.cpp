#include "Func.h"

int main() {
    int start, end;

    std::cout << "Enter the start of the interval: ";
    std::cin >> start;

    std::cout << "Enter the end of the interval: ";
    std::cin >> end;

    const int MAX_SIZE = end - start + 1;
    int result[MAX_SIZE];
    int count;

    findPerfectNumbers(start, end, result, count);

    if (count == 0) {
        std::cout << "No perfect numbers in the given interval." << std::endl;
    }
    else {
        std::cout << "Perfect numbers in the given interval: ";
        for (int i = 0; i < count; ++i) {
            std::cout << result[i] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
