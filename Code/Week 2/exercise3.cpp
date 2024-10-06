#include <iostream>
using namespace std;

void main()
{

    int year{0};

    cout << "Input a year: ";
    cin >> year;

    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        cout << year << " is a leap year." << endl;
    }
    else
    {
        cout << year << " is a normal year." << endl;
    }


}