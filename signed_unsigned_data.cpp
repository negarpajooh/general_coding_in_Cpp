#include <iostream>
void UnSigned(){
    unsigned short s{526};
    unsigned int i{526};
    unsigned long l{526};
    unsigned long long ll{526};
}

void Signed(){
    short s{524};
    std::cout<<"s: "<< s<<"\n";
    int i{-3};
    std::cout<<"i: "<< i<<"\n";
    std::cout<<"s+i = "<< s+i<< "\n";
    std::cout<<"s/i ="<< s/i<<"\n";
    std::cout<<"i/s =" << i/s<<"\n";
    long l{-883};
    std::cout<<l<<"\n";
    long long ll{9968758522555};
    std::cout<<ll<<"\n";
}

int main(){
    Signed();
    //UnSigned();
    return 0;
}