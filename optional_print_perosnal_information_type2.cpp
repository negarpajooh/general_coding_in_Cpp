#include <iostream>
#include <string>
using namespace std;

void program1()
{
    cout << "Input your age: ";
    double age{};
    cin >> age;
    cout<<"Give me Your name";
    string name{};
    cin>>name;
    cout << "My name is " <<name <<"\n your age is: "<< age ;
}

int main()
{
    program1();
    //program2();

    return 0;
}