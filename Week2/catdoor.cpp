#include <iostream>
using namespace std;

void pressButton(bool innerDoor, bool outerDoor, bool inside)
{

    string buttonPressedSTR = "";

    if (innerDoor == true && outerDoor == true)
    {
        // If they're both open, lose.
        cout << "Unico Uni escaped and wreaked havoc upon the wildlife, you lose.";

    }

    // if one is open and the other is closed, check for.
    if (innerDoor == true && outerDoor == false || innerDoor == false && outerDoor == true)
    {

        // swap the state of the doors, so that one is open and the other remains closed.
        std::swap(innerDoor, outerDoor);
        // you start outside, the patio door is now open and you step through. But the front door is closed, check if they want to press the button again, swap them.
        if (outerDoor == true && inside == false)
        {

            cout << "You have opened the patio door, the front door is now closed. \nTo enter you need to press the button again, do you?: ";
            cin >> buttonPressedSTR;

            if (buttonPressedSTR == "yes" || buttonPressedSTR == "Yes" || buttonPressedSTR == "true" || buttonPressedSTR == "True")
            {

                pressButton(innerDoor, outerDoor, inside);
                return;

            }

        }
        // you start inside, the front door is now open and you step out but the patio door is closed, check if they want to press the button again, swap them.
        else if (innerDoor == true && inside == true)
        {

            cout << "You have opened the front door, the patio door is now closed. \nTo exit you need to press the button again, do you?: ";
            cin >> buttonPressedSTR;

            if (buttonPressedSTR == "yes" || buttonPressedSTR == "Yes" || buttonPressedSTR == "true" || buttonPressedSTR == "True")
            {

                pressButton(innerDoor, outerDoor, inside);
                return;

            }

        }
        else
        {

            cout << "Unico Uni has not escaped, you win this time.";

        }

    }

    return;

}


void main()
{

    bool innerDoor = false;
    bool outerDoor = false;
    string buttonPressedSTR = " ";
    bool buttonPressed = true;
    string insideOrOutside = " ";
    bool inside = false;

    cout << "Are you starting inside or outside?: ";
    cin >> insideOrOutside;

    if (insideOrOutside == "Inside" || insideOrOutside == "inside")
    {
        cout << "To get outside: the front door has to open but the patio door cannot be open at the same time, pressing the button will close one door and open the other, it will take at most two button presses to enter the house. Try it out!" << endl;
        inside = true;
    }
    else
    {
        cout << "To get inside: the patio door has to open but the front door cannot be open at the same time, pressing the button will close one door and open the other, it will take at most two button presses to exit the house. Try it out!" << endl;
    }

    cout << "The current state of the doors (1 is open, 0 is closed): " << "\nInner door: " << innerDoor << "\nOuter door: " << outerDoor;
    cout << "\nDo you press the button?: ";
    cin >> buttonPressedSTR; 

    if (buttonPressedSTR == "yes" || buttonPressedSTR == "Yes" || buttonPressedSTR == "true" || buttonPressedSTR == "True")
    {
        // A single button press to swap the state of the doors.
        buttonPressed = true;

        pressButton(innerDoor, outerDoor, inside);

        // if both are closed and the player has started outside then open the outside door first, then prompt a swap.
        if (innerDoor == false && outerDoor == false && inside == false)
        {
            outerDoor = true;
            cout << "You have opened the patio door, the front door remains closed. \nTo enter you need to press the button again, do you?: ";
            cin >> buttonPressedSTR;

            // check if they want to press the button again, swapping them.
            if (buttonPressedSTR == "yes" || buttonPressedSTR == "Yes" || buttonPressedSTR == "true" || buttonPressedSTR == "True")
            {

                pressButton(innerDoor, outerDoor, inside);

            } 

        }
        // if both are closed and the player has starte dinside then open the inside door first, then prompt a swap.
        else if (innerDoor == false && outerDoor == false && inside == true)
        {
            innerDoor = true;
            cout << "You have opened the front door, the patio door remains closed. \nTo exit you need to press the button again, do you?: ";
            cin >> buttonPressedSTR;

            // check if they want to press the button again, swapping them.
            if (buttonPressedSTR == "yes" || buttonPressedSTR == "Yes" || buttonPressedSTR == "true" || buttonPressedSTR == "True")
            {

                pressButton(innerDoor, outerDoor, inside);

            } 

        }

    }
    else
    {
        cout << "The doors remain unchanged.";

        if (innerDoor == true && outerDoor == true)
        {

            cout << " And Unico Uni escaped and wreaked havoc upon the wildlife, you lose.";

        }

    }

return;

}