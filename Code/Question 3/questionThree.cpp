#include <iostream>
using namespace std;

void main() {

int result = (6 % 4);           // the remainder is 2 because 6/4 = 1 (As a whole number) and thus calculates 6-4 to get the remaining two numbers. 
int resultTwo = (1252 % 42);    //It is typically unnecessary to use a float || double to store the result of a modulo operation unless one or both inputs are floats || doubles.

    cout << "Modulo (Modulus || %) is a mathematical operator that calculates the remainder of a division between two numbers. The equation 6 % 4 would be equal to: " << result << "\nJust as the remainder of the equation 1252 % 42 would be: " << resultTwo << endl;
    return;

}