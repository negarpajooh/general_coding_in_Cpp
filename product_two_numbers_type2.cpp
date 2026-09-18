#include <iostream>
void program();
int add(double,double);

int main(){
    double a{};
    double b{};
    double c{};
    program();
    c=add(a,b);
    std:: cout << "Your Summation is : " << c ;
    return 0;
}

void program(){
std::cout<<"Hello Mojtaba Hasanlu\n";
}

int add(double a,double b){
std::cout<<"enter a : ";
std::cin>>a;
std::cout<<"enter b : ";
std::cin>>b;
return a+b;
}
