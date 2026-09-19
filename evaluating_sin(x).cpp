#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
int main()
{
    ofstream file("sine.txt");
    if (!file) {
        cerr << "Could not open sine.txt\n";
        return 1;
    }

    const double pi = 3.141592653589793;
    const int N = 10;   // number of steps

    cout << "Start Running...\n";

    for (int i = 0; i <= N; ++i) {
        double x = 2 * pi * i / N;
        double y = std::sin(x);
        cout<<"iter "<<i<<" | "<<"x = "<<x<<" | "<<"y = "<<y<<"\n";
        file << x << " " << y << "\n";
    }

    file.close();
    cout << "Completed ...\n";
    return 0;
}