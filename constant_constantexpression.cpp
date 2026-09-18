#include <iostream>
void Number(int a){
        std::cout<<"Y is constant by user: "<<a<<"\n";
}
int main(){
 constexpr double x{2.3};
 const double y{5};
 std::cout<<"X is a constant experession : "<<x<<"\n";
 Number(y);
 return 0;
}