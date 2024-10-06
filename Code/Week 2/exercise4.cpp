#include <iostream>
using namespace std;

void main()
{

    int seconds{0};

    cout << "Input the number of seconds: ";
    cin >> seconds;

    int minutesLeft = (seconds % 3600) / 60;
    int days = seconds / 86400;
    int hoursLeft = days / 24;
    int remainingSeconds = (seconds%60);

    cout << days <<  "D " << hoursLeft << "H " << minutesLeft << "M " << remainingSeconds << "S";

}