// coins.cpp
#include <iostream>
using namespace std;

// Declare variables for coin counts
int quarters = 0; // Number of quarters
int dimes = 0;    // Number of dimes
int nickels = 0;  // Number of nickels
int pennies = 0;  // Number of pennies

// Function to calculate change from a given amount in pennies
void calculateChange(int purchase) {
    int change = 100 - purchase; // Calculate change from a dollar (100 cents)

    // Calculate number of quarters
    quarters = change / 25;
    change %= 25;

    // Calculate number of dimes
    dimes = change / 10;
    change %= 10;

    // Calculate number of nickels
    nickels = change / 5;
    change %= 5;

    // Remaining change is the number of pennies
    pennies = change;
}
