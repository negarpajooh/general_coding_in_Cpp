#include <iostream>
#include <fstream>
#include <cmath>
#include <utility>

std::pair<double,double> SinCos(double x)
{
    const double pi = 3.141592653589793;

    double y = sin(pi*x);
    double z = cos(pi*x);

    return {y,z};
}

int main()
{
    std::ofstream file("SinCos.txt");

    for(int i = 1; i <= 200; i++)
    {
        auto result = SinCos(i);

        double y = result.first;
        double z = result.second;

        file << i << " " << y << " " << z << "\n";
    }

    file.close();

    std::cout << "Data saved successfully.\n";

    return 0;
}