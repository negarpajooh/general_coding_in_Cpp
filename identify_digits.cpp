#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Please enter your number: ";

    double x{};
    std::cin >> x;

    if (x == 0)
    {
        std::cout << "Your number is zero";
    }
    else if (x > 0)
    {
        if (std::floor(x) == x)
            std::cout << "Your number is positive and integer";
        else
            std::cout << "Your number is positive and double";
    }
    else   // x < 0
    {
        if (x == -1)
        {
            std::cout << "Your number is -1";
        }
        else if (x > -1 && x < 0)
        {
            std::cout << "Your number is between -1 and 0";
        }
        else if (std::floor(x) == x)
        {
            std::cout << "Your number is negative and integer";
        }
        else
        {
            std::cout << "Your number is negative and double";
        }
    }

    return 0;
}