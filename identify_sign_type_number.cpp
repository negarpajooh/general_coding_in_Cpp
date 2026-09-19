#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Please enter your number: ";

    double x{};
    std::cin >> x;

    if (x < 0)
    {
        if (std::floor(x) == x)
        {
            std::cout << "Your number is negative and integer";
        }
        else
        {
            std::cout << "Your number is negative and non-integer";
        }
    }
    else if (x > 0)
    {
        if (std::floor(x) == x)
        {
            std::cout << "Your number is positive and integer";
        }
        else
        {
            std::cout << "Your number is positive and non-integer";
        }
    }
    else
    {
        std::cout << "Your number is zero";
    }

    return 0;
}
