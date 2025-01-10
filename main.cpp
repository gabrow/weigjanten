#include <iostream>
#include "func.h"

int main() {
    int number = 5;
    int result = factorial(number);
    std::cout << "Factorial of " << number << " is " << result << std::endl;
    return 0;
}