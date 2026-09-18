#include  <iostream>
#include  <string>

void program1()
{
   std::cout<<"I hope you are doing well\n";
}

 void program2(int& age, double& tall)
{  
   std::cout << "plz enter your age";
   std::cin >> age;
   std::cout << "plz enter your tall";
   std::cin >> tall;
}
void program3(int age, double tall)
{
std::cout<<"Thank you for your information\n";
std:: cout<<"Your age is " << age << " years old\n";
std::cout<<"Your tall is "<< tall<<" - meter \n";
}

int main()
{ int age{};
   double tall{};
    program1();
    program2(age,tall);
    program3(age,tall);
    return 0;
}
