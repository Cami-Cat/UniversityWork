#include <iostream>
using namespace std;

void main()
{

    int input{0};

    cout << "Input a number between 1 - 7: ";
    cin >> input;

    if (1 == input)
    {
        cout << "\nYou have chosen... Monday." << endl;
        return;
    }
    else if (2 == input)
    {
        cout << "\nYou have chosen... Tuesday." << endl;
        return;
    }    
    else if (3 == input)
    {
        cout << "\nYou have chosen... Wednesday." << endl;
        return;
    }
    else if (4 == input)
    {
        cout << "\nYou have chosen... Thursday." << endl;
        return;
    }
    else if (5 == input)
    {
        cout << "\nYou have chosen... Friday." << endl;
        return;
    }
    else if (6 == input)
    {
        cout << "\nYou have chosen... Saturday." << endl;
        return;
    }
    else if (7 == input)
    {
        cout << "\nYou have chosen... Sunday." << endl;
        return;
    }
    else 
    {
        cout << "\nYou did not input a legal choice.";
        return;
    }

}