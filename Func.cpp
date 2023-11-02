#include "Func.h"

bool isLuckyNumber(int number) {
    int sumFirstHalf = 0;
    int sumSecondHalf = 0;

    for (int i = 0; i < 3; ++i) {
        sumFirstHalf += number % 10;
        number /= 10;
    }

    for (int i = 0; i < 3; ++i) {
        sumSecondHalf += number % 10;
        number /= 10;
    }

    return sumFirstHalf == sumSecondHalf;
}
