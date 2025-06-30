#include <iostream>
#include <iomanip>

using namespace std;

// Function to calculate cost per mile and distance based on gallons, miles per gallon, and price per gallon
// This program calculates the cost per 100 miles and the distance that can be driven with a given number of gallons of gas.
// It takes user input for the number of gallons, miles per gallon, and price per gallon
int main() {
    cout << "Enter number of gallons: ";
    double num_gal;
    cin >> num_gal;
    
    cout << "Enter miles per gallon: ";
    double miles_per_gal;
    cin >> miles_per_gal;
    
    cout << "Enter price per gallon: ";
    double price_per_gal;
    cin >> price_per_gal;
    
    // Validating user input
    if (num_gal <= 0 || miles_per_gal <= 0 || price_per_gal <= 0) {
        cout << "Invalid input. All values must be greater than zero." << endl;
        return 1; // Exit with error code
    }
    // Calculating cost per 100 miles and distance
    // Cost per 100 miles is calculated as (price per gallon * number of miles) / miles per gallon
    // Distance is calculated as number of gallons * miles per gallon
    double num_miles = 100.0;
    double cost_per_mile = price_per_gal * num_miles / miles_per_gal;
    double distance = num_gal * miles_per_gal;
    
    //Adding fixed precision of 2 digits
    cout << fixed << setprecision(2); //setting output to two decimal places
    
    // Outputting the results
    cout << "Cost per 100 miles is $" << cost_per_mile << endl;
    cout << "You can make it " << distance << " miles" << endl;
    
    return 0; // Exit with success code
}