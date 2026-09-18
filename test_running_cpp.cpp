#include <iostream>
void doA()
{
    std :: cout << "doA is running\n";
}

void Print()
{
    std :: cout<<"****Print your document****\n";
    doA();
}


int main()
{
 std :: cout <<"first function starts\n";
 Print();
 std :: cout <<"first function finished\n";
 Print();
 Print();
 Print();
 Print();
 return 0;
}