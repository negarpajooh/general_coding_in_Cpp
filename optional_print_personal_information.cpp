#include <iostream>

void program1()
{
    int age = 30;
    std::cout << "My age is " << age << " years old.\n";
    std::cout << "My name is Mojtaba Hasanlu\n";
}

void program2()
{
    std::cout << "Input your age: ";

    double age{};
    std::cin >> age;

    std::cout << "My age is " << age << " years old.\n";
}

int main()
{
    program1();
    program2();

    return 0;
}