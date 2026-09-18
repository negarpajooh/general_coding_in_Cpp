#include <iostream>
#include <string>
using namespace std;

int program1(){

 cout<<"please enter your age";
 int age={};
 cin>>age;
 return age;
}
string program2(){
    string name1, name2;
    cout <<"enter your firstname? \n";
    cin >> name1;
    cout << "enter your last name? \n";
    cin >> name2;
    return name1+" "+ name2;
}

int main(){
 int age{program1()};
 cout<<"your age is "<<age << "\n";
 string name1{program2()};
 cout<<" My fullname is "<< name1;
 return 0;
}