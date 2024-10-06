#include <iostream>
using namespace std;

// Oliver Russell

string enemyVisible(int gHealth, int remainingBullets, float distanceFromEnemy) 
{

    string action = " ";

    if (gHealth >= 10)
    {
      cout << "\nHow far away is the enemy (in m)?: ";
      cin >> distanceFromEnemy;
        // if the guard sees an enemy and has enough health to engage in combat, engage.
        if (distanceFromEnemy >= 20 && remainingBullets >= 1)
        {
            // if the distance from the enemy is 20 or higher and the guard has bullets, fire.
            action = "Firing!";
        }
        else if (distanceFromEnemy <= 19 || remainingBullets <= 0)
        {
            // if the distance from the enemy is lower than or equal to 19 OR the guard has no remaining bullets, fight unarmed.
            action = "Unarmed fighting.";
        }
        else 
        {
            // Return nothing if broken
            cout << "You didn't input a legal value, try again" << endl;
        }
    }
    else if (gHealth <= 9)
    {
        // if the guard doesn't have enough health to engage in combat with a visible enemy, retreat.
        action = "Retreat!";
    }
    else 
    {
        // Do nothing.
    }
    return action;
}

string enemyNotVisible(int remainingBullets)
{
    bool visibleEnemy = false;
    string action = " ";

    if (remainingBullets >=1)
    {
        // if the guard has bullets remaining and there are no visible enemies, patrol.
        action = "Patrolling...";
    }
    else 
    {
        // if the guard can see no enemies and is out of bullets, search for ammunition.
        action = "Searching for ammo...";
    }

    return action;
}

void main() 
{
    int gHealth{0};
    int remainingBullets{0};
    string visibleEnemySTR = " ";
    bool visibleEnemy = false;
    float distanceFromEnemy{0};

    cout << "You are controlling a guard, please implement these values:" << endl;
    cout << "The health of your guard (Out of 100): ";
    cin >> gHealth;

    if (gHealth >= 100)
    {
        // clamp the health to a maximum of 100
        cout << "This value cannot be greater than 100, setting to 100...";
        gHealth = 100;
    }
    else if (gHealth <= 0)
    {   
        // if health is lower than legally permissable, kill.
        cout << "You are dead." << endl;
        return;
    }

    cout << "\nThe number of bullets your guard has (Out of 100): ";
    cin >> remainingBullets;
    
    if (remainingBullets >= 100)
    {   
        // You can't have more than 100!
        cout << "This value cannot be greater than 100, setting to 100...";
        remainingBullets = 100;
    }
    if (remainingBullets <= 0)
    {
        // Make sure that anything possibly below 0 returns a 0.
        remainingBullets = 0;
    }

    cout << "\nIs an enemy visible? (True or False): ";
    cin >> visibleEnemySTR;

    if (visibleEnemySTR == "Yes" || visibleEnemySTR == "yes" || visibleEnemySTR == "true" || visibleEnemySTR == "True")
    {   
        // call for enemyVisible with the necessary inputs.
        string action = enemyVisible(gHealth, remainingBullets, distanceFromEnemy);
        cout << action;
        return;
    }
    else if (visibleEnemySTR == "No" || visibleEnemySTR == "no" || visibleEnemySTR == "false" || visibleEnemySTR == "False")
    {
        // call for enemyNotVisible with the necessary inputs.
        string action = enemyNotVisible(remainingBullets);
        cout << action;
        return;
    }
    else 
    {
        cout << "You didn't input a legal choice, please start again." << endl;
        return;
    }
}