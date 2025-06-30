#include <iostream>
//#include <iomanip> // for std::setprecision
#include <cmath>   // for std::pow

using namespace std;

//writing program that prompts the user for a number and displays the square, cube, and fourth power of that number

int main() {
    double number; // variable to store the user input number

    cout << "Enter a number: "; // prompt the user for a number
    cin >> number; // read the input number

    // calculate the square, cube, and fourth power of the number
    double square = pow(number, 2); // calculate square
    double cube = pow(number, 3);   // calculate cube
    double fourthPower = pow(number, 4); // calculate fourth power

    // set precision for output
    //cout << fixed << setprecision(2); // set output to two decimal places

    // display the results
    cout << "Square of " << number << " is " << square << endl;
    cout << "Cube of " << number << " is " << cube << endl;
    cout << "Fourth power of " << number << " is " << fourthPower << endl;

    return 0; // indicate successful execution
}

