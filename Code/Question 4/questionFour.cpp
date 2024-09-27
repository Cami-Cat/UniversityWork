#include <iostream>
using namespace std;

void main(){

int input{0};
int result{0};

        cout << "Write four integers" << endl;
        cin >> input;
        result += input;
        cin >> input;
        result += input;
        cin >> input;
        result += input;
        cin >> input;
        result += input;

        result = result / 4;

        cout << "The average of the chosen integers is (less accurate than float): " << result << endl;

}