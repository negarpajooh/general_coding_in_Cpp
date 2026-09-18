#include <iostream>
#include <cmath>
void Constant(double x){
    if (std::floor(x)==x)
    {std::cout<<"this number is integer"<<"\n";
    const int x{};}
    else
    {std::cout<<"this number is double"<<"\n";
    const double x{};
}
}

int main(){
    const double x{2.6};
    const int y{8};
    Constant(3.2);
    Constant(3);
    std::cout<<"x : "<< x <<"\n";
    std::cout<<"y : "<< y <<"\n";
    return 0;
}