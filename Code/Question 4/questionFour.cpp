#include <iostream>
using namespace std;

void main(){

// only allowed two variables to calculate four integers. First, set the variables

int input{0};
int result{0};


        // Collect the first input.
        cout << "Write four integers" << endl;
        cin >> input;
        // Add this input to the result.
        result += input;
        cin >> input;
        // Add this input to the result, now input A and input B have been stored as a+b in result.
        result += input;
        cin >> input;
        result += input;
        cin >> input;
        // a+b+c+d
        result += input;

        // Divide the result by the number specified, 4
        result = result / 4;

        // Print result
        cout << "The average of the chosen integers is (less accurate than float): " << result << endl;
        return;
}