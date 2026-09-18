# include <iostream>
#include <cmath>
int main () {
std::cout<<"enter your based number :";
double x{};
std::cin>> x;
std::cout<<"enter your power number :";
double y{};
std::cin>> y;
double z{};
z=pow(x,y);
std::cout<<"Answer : "<<z<<"\n";
    return 0;
}