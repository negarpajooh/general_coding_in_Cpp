#include <iostream>
int main(){
    std::cout<<"Enter x"<<"\n";
    double x{};
    std::cin>>x;
    std::cout<<"Enter y"<<"\n";
    double y{};
    std::cin>>y; 
    if (x!=0.0)
    std::cout<<"y/x= "<<static_cast<int>(y)/static_cast<int>(x)<<"\n";
    else
    std::cout<<"Impossible !";
    return 0;
}