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
    return 0; //returning zero to indicate successful execution

}


