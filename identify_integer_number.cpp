#include <iostream>
#include <cmath>
int main(){
 std::cout<<"enter your number: "<<"\n";
 double x{};
 std::cin>>x;
 if (x<0)
 {{std::cout<<"your number is negative"<<"\n";}
 if (floor(x)==x){
    std::cout<<" integer"<<"\n";   
}
else {
    std::cout<<" non-integer"<<"\n";
}}
else if (x>0)
{std::cout<<"your number is positive"<<"\n";
if (floor(x)==x)
{
    std::cout<<" integer"<<"\n";   
}
else {
    std::cout<<" non-integer"<<"\n";
}
}
 else 
 {std::cout<<"your nmuber is Zero";}
    return 0;
}