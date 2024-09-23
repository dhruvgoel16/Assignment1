// main.cpp
#include <iostream>
using namespace std;

// Declare external variables from coins.cpp
extern int quarters;
extern int dimes;
extern int nickels;
extern int pennies;

// Declare the function to calculate change
extern void calculateChange(int purchase);

int main() {
    // Variables to hold coin counts
    int purchase;

    // Prompt the user for a positive integer (purchase in pennies)
    cout << "Enter your purchase amount in pennies (1 to 99): ";
    cin >> purchase;

    // Calculate the change
    calculateChange(purchase);

    // Display the change in coins
    cout << "Change from a dollar:" << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes: " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;

    return 0; // Exit successfully
}
