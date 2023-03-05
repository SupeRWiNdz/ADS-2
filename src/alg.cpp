// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

double pown(double value, uint16_t n) {
if (n == 0) return 1;
double result = value;
for (uint16_t i = 1; i < n; i++)
result *= value;
return result;
}

uint64_t fact(uint16_t n) {
if (n == 0) return (1);
else return (n * fact(n - 1));
}

double calcItem(double x, uint16_t n) {
    return 0;
}

double expn(double x, uint16_t count) {
    return 0;
}

double sinn(double x, uint16_t count) {
    return 0;
}

double cosn(double x, uint16_t count) {
    return 0;
}
