#include <iostream>

double f(double x)
{
    return x;
}

int main()
{
    double a = 0.0;      // lower limit
    double b = 3.0;      // upper limit
    int n = 1000;        // number of intervals

    double h = (b - a) / n;
    double integral = 0.0;

    for (int i = 0; i < n; i++)
    {
        double x1 = a + i * h;
        double x2 = a + (i + 1) * h;

        integral += (f(x1) + f(x2)) * h / 2.0;
    }

    std::cout << "Integral = " << integral << "\n";

    return 0;
}