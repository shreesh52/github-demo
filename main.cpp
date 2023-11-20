// main.cpp
#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    int num1, num2;
    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Sum: " << calculator.add(num1, num2) << std::endl;
    std::cout << "Difference: " << calculator.subtract(num1, num2) << std::endl;
    std::cout << "Product: " << calculator.multiply(num1, num2) << std::endl;

    if (num2 != 0) {
        std::cout << "Quotient: " << calculator.divide(num1, num2) << std::endl;
    } else {
        std::cout << "Cannot divide by zero." << std::endl;
    }
    std::cout << "Hi hello, How are you?" << std::endl;

    return 0;
}

