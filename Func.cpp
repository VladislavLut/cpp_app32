#include "Func.h"

double power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < abs(exponent); ++i) {
        result *= base;
    }

    if (exponent < 0) {
        result = 1.0 / result;
    }

    return result;
}
