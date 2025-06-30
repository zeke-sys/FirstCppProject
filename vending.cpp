#include <iostream>
#include <iomanip> // for std::setprecision
#include <cmath>   // for std::pow  

using namespace std;   

//function to calculate pennies and quarters in dollars and return change for an item bought
int main() {
    const int PENNIES_PER_DOLLAR = 100; // number of pennies in a dollar
    const int PENNIES_PER_QUARTER = 25; // number of pennies in a quarter
    const int PENNIES_PER_NICKEL = 5; // number of pennies in a nickel
    const int PENNIES_PER_DIME = 10; // number of pennies in a dime
    const int QUARTERS_PER_DOLLAR = 4; // number of quarters in a dollar

    cout << "Enter bill value (1 = $1 bill, 5 = $5 bill, 10 = $10 bill, etc.): ";
    int billValue;
    cin >> billValue; // input the bill value
    cout << "Enter item price (in dollars): ";
    double itemPrice;
    cin >> itemPrice; // input the item price
    cout << fixed << setprecision(2); // set output to two decimal places
    cout << "Bill value: $" << billValue << endl; // print the bill value
    cout << "Item price: $" << itemPrice << endl; // print the item price

    
    // check if the bill value is valid
    if (billValue <= 0) {
        cout << "Invalid bill value." << endl; // check for valid bill value
        return 1; // exit with error code
    }
    // check if the item price is valid
    if (itemPrice <= 0) {
        cout << "Invalid item price." << endl; // check for valid item price
        return 1; // exit with error code
    }
    // calculate the change to be returned
    double change = billValue - itemPrice; // calculate change
    if (change < 0) {
        cout << "Not enough money to buy the item." << endl; // check if there is enough money
        return 1; // exit with error code
    }
    cout << "Change to be returned: $" << change << endl; // print the change to be returned

    //keeping the original change value for later calculations
    double originalChange = change; // store the original change value for later calculations

    // calculate the number of quarters, dimes, nickels, and pennies
    // using the change value in dollars, we convert it to pennies for easier calculations
    // using static_cast to convert double to int for calculations
    int quarters = static_cast<int>(change * PENNIES_PER_DOLLAR) / PENNIES_PER_QUARTER; // calculate number of quarters
    change -= quarters * (PENNIES_PER_QUARTER / static_cast<double>(PENNIES_PER_DOLLAR)); // subtract the value of quarters from change
    int dimes = static_cast<int>(change * PENNIES_PER_DOLLAR) / PENNIES_PER_DIME; // calculate number of dimes
    change -= dimes * (PENNIES_PER_DIME / static_cast<double>(PENNIES_PER_DOLLAR)); // subtract the value of dimes from change
    int nickels = static_cast<int>(change * PENNIES_PER_DOLLAR) / PENNIES_PER_NICKEL; // calculate number of nickels
    change -= nickels * (PENNIES_PER_NICKEL / static_cast<double>(PENNIES_PER_DOLLAR)); // subtract the value of nickels from change
    // after subtracting the value of quarters, dimes, and nickels, we are left with the remaining change in dollars
    // which we will convert to pennies
    int pennies = static_cast<int>(round(change * PENNIES_PER_DOLLAR)); // calculate number of pennies, rounding to avoid floating point issues
    // round is used to avoid floating point precision issues when converting change to pennies

    // print the number of each type of coin
    cout << "Coins to be returned:" << endl; // print header for coins
    cout << "Quarters: " << quarters << endl; // print the number of quarters
    cout << "Dimes: " << dimes << endl; // print the number of dimes
    cout << "Nickels: " << nickels << endl; // print the number of nickels
    // print the number of pennies
    cout << "Pennies: " << pennies << endl; // print the number of pennies
    // calculate the total number of coins
    int totalCoins = quarters + dimes + nickels + pennies; // calculate total coins
    cout << "Total coins: " << totalCoins << endl; // print the total number
    // calculate the total value of the coins in dollars
    double totalValue = (quarters * (PENNIES_PER_QUARTER / static_cast<double>(PENNIES_PER_DOLLAR))) +
                        (dimes * (PENNIES_PER_DIME / static_cast<double>(PENNIES_PER_DOLLAR))) +
                        (nickels * (PENNIES_PER_NICKEL / static_cast<double>(PENNIES_PER_DOLLAR))) +
                        (pennies / static_cast<double>(PENNIES_PER_DOLLAR)); // calculate total value of coins
    
    cout << "Total value of coins: $" << totalValue << endl; // print the total value of the coins

    // check if the total value of the coins matches the change
    if (abs(totalValue - originalChange) < 0.01) { // using abs to check for floating point precision issues
        cout << "Total value of coins matches the change." << endl; // if they match, print this message
    } else {
        cout << "Total value of coins does not match the change." << endl; // if they don't match, print this message
    }
    return 0; // exit with success code
}