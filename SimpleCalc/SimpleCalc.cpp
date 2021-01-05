// SimpleCalc.cpp
//created by A. Keel 05-01-2021

#include <iostream>
#include "calculate.h"

int main()
{
    double x = 0.0, y = 0.0, result = 0.0;
    char oper;

    std::cout << "Simple calculator app " << std::endl << std::endl;
    std::cout << "Enter the equation (Ex. a+b | a-b | a*b | a/b):" << std::endl;

    calculate c;
    while (true) {
        std::cin >> x >> oper >> y;
        if (y == 0 && oper == '/') {
            std::cout << "Division by zero" << std::endl;
        }
        else {
            result = c.Calculate(x, oper, y);
            std::cout << "The result is: " << result << std::endl;
        }
    }
    return 0;
}

