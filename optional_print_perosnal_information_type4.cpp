#include  <iostream>
#include  <string>
using namespace std;
void program1()
{
   cout<<"I hope you are doing well\n";
}

 void program2(int& age, double& tall)
{  
   cout << "plz enter your age";
   cin >> age;
   cout << "plz enter your tall";
   cin >> tall;
}
void program3(int age, double tall)
{
cout<<"Thank you for your information\n";
cout<<"Your age is " << age << " years old\n";
cout<<"Your tall is "<< tall<<" - meter \n";
}

int main()
{ int age{};
   double tall{};
    program1();
    program2(age,tall);
    program3(age,tall);
    return 0;
}
