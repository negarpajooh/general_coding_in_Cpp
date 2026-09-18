#include <iostream>
#include <iomanip>
int main(){
std::cout<< std::setprecision(17);
double d1{1.32};
double d2{-3.25};
double zero{0.0};
std::cout<<"d1 : "<< d1<<"\n";
std::cout<<"d1-d1 : "<< d1-d1<<"\n";
//std::cout<<"d2 : "<< d2<<"\n";
std::cout<<"zero : "<< zero<<"\n";
std::cout<<"d1/zero : "<< d1/zero<<"\n";
std::cout<<"zero/zero :" <<zero/zero<<"\n";
//std::cout<<"d1+d2 : "<< d1+d2<<"\n";
//std::cout<<"d1-d2 : "<< d1-d2<<"\n";
 return 0;
}