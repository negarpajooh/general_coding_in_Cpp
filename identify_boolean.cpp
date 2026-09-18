#include <iostream>

void detection(double x){
    if (x==0)
    std::cout<<"False";
    else if (x == 1) 
    std::cout<<"True";
    else 
    std::cout<<"your number is not boolean";
}
int main(){
    std::cout << "Hello Mojtaba"<<"\n";
    bool b1{};
    bool b2{1};
    int b3{143};
    double b4{0.236};
    //
    std::cout << "b1 is : " << b1 << " | "; 
    detection(b1) ;
    std::cout<<"\n";
    //
    std::cout << "b2 is : " << b2  << " | ";
    detection(b2);
    std::cout<<"\n"; 
    //
    std::cout << "b3 is : " << b3  << " | ";
    detection(b3);
    std::cout<<"\n"; 
    //
    std::cout << "b4 is : " << b4  << " | ";
    detection(b4);
    std::cout<<"\n"; 
    //
    return 0;
}