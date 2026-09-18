#include <iostream>

int main(){
  std::cout<<"how old are you? "<<"\n";
  double age{};
  std::cin>>age;
  if (age>18)
  std::cout<<"can derive"<<"\n";
  else
  std::cout<<"can not derive"<<"\n";
    return 0;
}