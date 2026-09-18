#include <iostream>
#include <string>

void introduction(){
 std::cout<<" Hi, How are you? \n";
 std::cout<< "please enter your age?\n";

}

int program1(){
 int age{};
 std::cin>>age;
 return age;

}
int main(){
 introduction();
 int Age{program1()};
 std::cout<< "You are "<< Age << " years old.";
 return 0;
}
