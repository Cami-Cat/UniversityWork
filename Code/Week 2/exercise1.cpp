#include <iostream>
using namespace std;

void main(){

    int inputA{0};
    int inputB{0};

    cout << "Input two numbers: ";
    cin >> inputA >> inputB;

    if (inputA > inputB)
    {

        cout << "The number you chose first: " << inputA << " Is larger than " << inputB << endl;

    }
    else if (inputB > inputA)
    {
        cout << "Your second number: " << inputB << "Is larger than " << inputA << endl;
    }
    else if (inputA == inputB)
    {
        cout << "Both numbers are the same!" << endl;
    }

}