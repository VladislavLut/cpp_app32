#include "Func.h"

bool isPerfect(int number) {
    int sum = 1;

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            sum += i;
            if (i * i != number) {
                sum += number / i;
            }
        }
    }

    return sum == number && number != 1;
}

void findPerfectNumbers(int start, int end, int result[], int& count) {
    count = 0;

    for (int i = start; i <= end; ++i) {
        if (isPerfect(i)) {
            result[count] = i;
            count++;
        }
    }
}
