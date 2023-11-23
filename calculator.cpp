// Calculator.cpp
#include "calculator.h"
int z;

int Calculator::add(int a, int b) {
    return a + b;
}

int Calculator::subtract(int a, int b) {
    return a - b;
}

int Calculator::multiply(int a, int b) {
    return a * b;
}

float Calculator::divide(int a, int b) {
    if (b == 0) {
        // Handle division by zero
        return 0;
    }
    return static_cast<float>(a) / static_cast<float>(b);
}

