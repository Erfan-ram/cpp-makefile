#include <iostream>
#include "add-mine.h"
// #include "devi-to.h"

first *obj = new first;

using namespace std;

int main()
{
    float num1, num2;
    char opt = ' ';

    cout << "please enter the calculation expression and press enter ( + - * / )\n\t  : ";
    cin >> num1 >> opt >> num2;

    if (opt == '+')
    {
        cout << obj->addition(&num1, &num2);
    }
    else if (opt == '-')
    {
        cout << obj->mines(&num1, &num2);
    }
    else if (opt == '*')
    {
        cout << obj->mines(&num1, &num2);
    }
    else if (opt == '/')
    {
        cout << obj->mines(&num1, &num2);
    }
    

    return 0;
}