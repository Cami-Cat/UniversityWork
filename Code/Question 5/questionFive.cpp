#include <iostream>
using namespace std;

void main(){

    float price{0};
    float amount{0};
    float tax{0};
    float taxlessPrice{0};
    float taxedPrice{0};


    cout << "Please enter the price of a Kilogram of potatoes." << endl;
    cin >> price;
    cout << "Please enter the number of Kilograms of potatoes you desire." << endl;
    cin >> amount;

    taxlessPrice = price * amount;

    cout << "Please enter the tax, use percentages." << endl;
    cin >> tax;

    tax = (tax / 100) + 1;
    taxedPrice = taxlessPrice * tax;

    cout << "The total price for your transaction (excl. tax) is: " << taxlessPrice << "\nThe total price (incl. tax) is: " << taxedPrice << endl;


}