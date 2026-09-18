#include <iostream>
#define FOO 152
#define Job "Repairman"
int main(){
 #ifdef FOO
 std::cout<<FOO << "\n";
 #endif
 #ifndef Jobi
 std::cout<<Job<<"\n";
 #endif
 #if 0
 std::cout<<"nothing";
 #endif
 return 0;
}