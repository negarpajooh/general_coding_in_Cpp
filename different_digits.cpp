#include <iostream>
#include <iomanip>
int main(){
 int x{50};
 double y{50.00};
 float z{6.300f};
 double xx{263587452.12587963};
std::cout << std::setprecision(10);
std::cout<<typeid(x).name()<<"\n";
std::cout<<typeid(y).name()<<"\n";
std::cout<<typeid(z).name()<<"\n";
std::cout<<typeid(xx).name()<<"\n";
std::cout<<x<<"\n";
std::cout<<y<<"\n";
std::cout<<z<<"\n";
std::cout<<xx<<"\n";
return 0;
}