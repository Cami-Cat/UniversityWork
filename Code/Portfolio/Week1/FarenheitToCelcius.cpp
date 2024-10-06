#include <iostream>
using namespace std;

// Oliver Russell

float calculateFarenheit(int celcius){
    
    int farenheit = (celcius * 9/5) + 32;
    return farenheit; 

}

float calculateCelcius(int farenheit){
    
    int celcius = (farenheit - 32) * 5 / 9;
    return celcius;
}

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

            if(type == "c" || type == "C" || type == "celcius" || type == "Celcius") {
            // c++ doesn't have a well-made tolower() implementation; Makes checking for lowercase strings agony.
            // Perform the equation to calculate farenheit
            farenheit = calculateFarenheit(temperature);
            cout << "It's currently: " << farenheit << " degrees Farenheit" << endl;
            return;
            
            } else if(type == "f" || type == "F" || type == "Farenheit" || type == "farenheit") {
            
            // Perform the equation to calculate celcius
            celcius = calculateCelcius(temperature);
            cout << "It's currently: " << celcius << " degrees Celcius" << endl;
            return;

            } 
}