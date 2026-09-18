#include <iostream>
namespace doo{
    int algorithm(int x,int y){
        return x*y;
    }
}
namespace foo{
    int algorithm(int x, int y){
     return x+y;
}
}

namespace goo{
    int algorithm(int x, int y){
     return x-y;
}
}


int main(){
std::cout<<"x*y=  "<<doo::algorithm(3,4)<<"\n";
std::cout<<"x+y=  "<<foo::algorithm(3,4)<<"\n";
std::cout<<"x-y=  "<<goo::algorithm(3,4)<<"\n";
    return 0;
}