#include <iostream>
using namespace std;

void main()
{
    int input{0};

    cout << "Please input a number: ";
    cin >> input;

    int result = input % 2;

    if (result == 0)
    {
        cout << "Your number was even.";
    }
    else
    {
        cout << "Your number was odd.";
    }

}