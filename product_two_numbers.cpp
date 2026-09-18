#include <iostream>

int product(double num,double multiple){
   double result{};
   result= num * multiple;
   return result;
}

int main(){
    double num{};
    double multiple{};
    double result{};
    std::cout<<"enter your number: \n";
    std::cin>>num;
    std::cout<<"enter your multiple: \n";
    std::cin>>multiple;
    result=product(num,multiple);
    std::cout<<"your new number is : "<< result;
    return 0;

}
