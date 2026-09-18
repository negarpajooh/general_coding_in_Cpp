#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>

// double Sin(double x)
std::pair<double,double> SinCos(double x)
{
    const double pi=3.14;
    double y=sin(pi*x);
    double z=cos(pi*x);
    return {y,z};
}
int main(){
    for(int i=1; i<=200;i++)
    {
    auto result=SinCos(i);
    double y=result.first;
    double z=result.second;
    std::cout<<"y =[ "<<y<<"]"<<"\n";
    std::cout<<"z =[ "<<z<<"]"<<"\n";
    }
    return 0;
}