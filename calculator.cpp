#include <iostream>
// #include "add-mine.h"
// #include "devi-to.h"
#include </mnt/nvme1n1p1/cpp-projects/calculator/add-mine.h>

first *obj = new first;

using namespace std;

int main()
{
    int num1, num2;
    char opt = ' ';

    cout << "please enter the calculation expression and press enter";
    cin >> num1 >> opt >> num2;

    if (opt == '+')
    {
        cout << obj->addition(&num1, &num2);
    }

    return 0;
}