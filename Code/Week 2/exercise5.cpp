#include <iostream>
using namespace std;

int averageResults(int a, int b, int c, int d, int e, int f)
{

    int result = (a+b+c+d+e+f) / 6;
    return result;
}



void main()
{

    int moduleA;
    int moduleB;
    int moduleC;
    int moduleD;
    int moduleE;
    int moduleF;
    bool failedmodule = false;
    bool passed = false;

    cout << "Please enter the results of their modules" << endl;
    
    cin >> moduleA >> moduleB >> moduleC >> moduleD >> moduleE >> moduleF;
    int average = averageResults(moduleA, moduleB, moduleC, moduleD, moduleE, moduleF);

    cout << average << endl;


    if (moduleA <= 39) 
    {
        failedmodule = true;
        cout << "This student has not passed the first module, they do not pass.";
        return;
    }  
    else if (moduleB <= 39)
    {
        failedmodule = true;
        cout << "This student has not passed the second module, they do not pass.";
        return;
    }
    else if (moduleC <= 39)
    {
        failedmodule = true;
        cout << "This student has not passed the third module, they do not pass.";
        return;
    }
    else if (moduleD <= 39)
    {
        failedmodule = true;
        cout << "This student has not passed the fourth module, they do not pass.";
        return;
    }
    else if (moduleE <= 39)
    {
        failedmodule = true;
        cout << "This student has not passed the fifth module, they do not pass.";
        return;
    }
    else if (moduleF <= 39)
    {
        failedmodule = true;
        cout << "This student has not passed the sixth module, they do not pass.";
        return;
    }



    if (average >= 85 && average <= 100 && failedmodule != true)
    {
        cout << "The student has passed with an A*";
        passed = true;
    }
    else if (average >= 70 && average <= 84 && failedmodule != true)
    {
        cout << "The student has passed with a A";
        passed = true;
    }
    else if (average >= 60 && average <= 69 && failedmodule != true)
    {
        cout << "The student has passed with a B";
        passed = true;
    }
    else if (average >= 50 && average <= 59 && failedmodule != true)
    {
        cout << "The student has passed with a C";
        passed = true;
    }
    else if (average >= 40 && average <= 49 && failedmodule != true)
    {
        cout << "The student has passed with a D";
        passed = true;
    }
    else
    {
        cout << "The student has failed";
        passed = false;
    }

}