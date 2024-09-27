#include <iostream>
using namespace std;

void main(){

    int X1{0};
    int X2{0};
    int Y1{0};
    int Y2{0};
    float distanceF{0};
    

    // input X1, X2 :: Y1, Y2.
    cout << "Please input the coordinates on the X axis:" << endl;
    cin >> X1 >> X2;
    cout << "Please input the coordinates on the Y axis:" << endl;
    cin >> Y1 >> Y2;

    
    // Do a bit of Pythagorean Theorem to calculate distance
    distanceF = sqrt(pow((X2 - X1), 2) + pow((Y2 - Y1), 2));

    cout << distanceF << endl;

}