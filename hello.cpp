#include <iostream> // This header file is required for input and output operations in C++.
/*int main() {
    std::cout << "Hello, World!" << std::endl; //print to console
    std::cout << "This is a C++17 program." << std::endl;
    return 0; //returning zero to indicate successful execution
}*/

using namespace std; //tells the comipiler to use the standard namespace
int main() {
    cout << "Hello, World!" << endl; //print to console
    cout << "This is a C++17 program." << endl;
    cout << "The answer is " << 6 * 7 << "." << endl; //calculating and printing the answer

    //finding how long it takes to double an investment amount earning 5% a year
    double initialInvestment = 10000.0; //initial investment amount
    double interestRate = 0.05; //annual interest rate
    double targetAmount = initialInvestment * 2; //target amount to double the investment
    double currentAmount = initialInvestment; //current amount starts at the initial investment
    int years = 0; //counter for the number of years

    //loop to calculate the number of years required to double the investment
    while (currentAmount < targetAmount) { //loop until the current amount reaches the target amount
        currentAmount += currentAmount * interestRate; //calculate the new amount after adding interest
        years++; //increment the year counter
    }

    cout << "It will take " << years << " years to double the investment." << endl; //print the result


    //finding which car is better to buy based on purchase price and operating costs (fuel efficiency)
    double carAPurchasePrice = 25000.0; //purchase price of car A
    double carAFuelEfficiency = 50.0; //fuel efficiency of car A in miles per gallon
    double carBPurchasePrice = 20000.0; //purchase price of car B
    double carBFuelEfficiency = 30.0; //fuel efficiency of car B in miles per gallon
    double milesDrivenPerYear = 15000.0; //average miles driven per year
    double fuelPricePerGallon = 4.0; //price of fuel per gallon

    //calculating the total cost of ownership for each car over a period of 5 years
     double carAOperatingCost = (milesDrivenPerYear / carAFuelEfficiency) * fuelPricePerGallon; //annual operating cost of car A
    double carBOperatingCost = (milesDrivenPerYear / carBFuelEfficiency) * fuelPricePerGallon; //annual operating cost of car B
    double carATotalCost = carAPurchasePrice + (carAOperatingCost * 10); //total cost of car A over 10 years
    double carBTotalCost = carBPurchasePrice + (carBOperatingCost * 10); //total cost of car B over 10 years  

    cout << "Car A total cost over 10 years: $" << carATotalCost << endl; //print the total cost of car A
    cout << "Car B total cost over 10 years: $" << carBTotalCost << endl; //print the total cost of car B

    //comparing the total costs of both cars
    if (carATotalCost < carBTotalCost) {
        cout << "Car A is the better choice." << endl; //if car A is cheaper, print this message
    } else if (carBTotalCost < carATotalCost) {
        cout << "Car B is the better choice." << endl; //if car B is cheaper, print this message
    } else {
        cout << "Both cars have the same total cost." << endl; //if both cars have the same cost, print this message
    }
    return 0; //returning zero to indicate successful execution
   


}


