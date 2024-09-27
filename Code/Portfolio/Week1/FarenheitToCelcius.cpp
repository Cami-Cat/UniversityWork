#include <iostream>
#include <locale>
using namespace std;


void main(){

    float celcius {0};
    float farenheit{0};
    float temperature(0);
    string type;

    // Do you use Farenheit or Celcius?
    cout << "What is the temperature right now?" << endl;
    cin >> temperature;


    cout << "Is this in C or F?" << endl;
    cin >> type;

            if(type == "c") {
            celcius = temperature;
            // Perform the equation to calculate farenheit
            farenheit = (celcius * 9/5) + 32;
            // Output the result
            cout << "It's currently: " << farenheit << " degrees Farenheit" << endl;
            return;
            
            } else 
            // c++ doesn't have a well-made tolower() implementation that makes checking for lowercase strings agony. Run two
            if(type == "C") {
            celcius = temperature;
            // Perform the equation to calculate farenheit
            //celcius = (farenheit - 32) * 5 / 9;
            farenheit = (celcius * 9/5) + 32;
            // Output the result
            cout << "It's currently: " << farenheit << " degrees Farenheit" << endl;
            return;
            
            } if(type == "f") {
            farenheit = temperature;
            // Perform the equation to calculate celcius
            celcius = (farenheit - 32) * 5 / 9;
            // Output the result
            cout << "It's currently: " << celcius << " degrees Celcius" << endl;
            return;

            } else if(type == "F") {
            farenheit = temperature;
            // Perform the equation to calculate celcius
            celcius = (farenheit - 32) * 5 / 9;
            // Output the result
            cout << "It's currently: " << celcius << " degrees Celcius" << endl;
            return;

            } else {
                cout << "Please only input 'C' or 'F' and blame C++, not me." << endl;
                return;
            }
}