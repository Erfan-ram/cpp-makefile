#include <iostream>
#include "src/add-mine.cpp"
#include "src/mul-dev.cpp"

first *obj1 = new first;
second *obj2 = new second;

using namespace std;

int main()
{
    float num1, num2;
    char opt = ' ';

    cout << "please enter the calculation expression and press enter ( + - * / )\n\t  : ";
    cin >> num1 >> opt >> num2;

    if (opt == '+')
    {
        cout << obj1->addition(num1, num2);
    }
    else if (opt == '-')
    {
        cout << obj1->subtraction(num1, num2);
    }
    else if (opt == '*')
    {
        cout << obj2->multiplication(num1, num2);
    }
    else if (opt == '/')
    {
        cout << obj2->division(num1, num2);
    }

    delete obj1;
    delete obj2;

    return 0;
}