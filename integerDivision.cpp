#include <iostream>
#include <iomanip> // for std::setprecision
#include <cmath> // for std::pow
using namespace std;

int main() {
    int a, b;
    double c;
    cout << fixed << setprecision(2); // Set precision for output

    a = 23;
    b = 3;
    c = static_cast<double>(a / b); // Perform integer division and convert to double
    cout << "23/3 = " << a / b << endl; // Integer division result
    cout << "23.0/3 = " << static_cast<double>(a) / b << endl; // Floating-point division result
    cout << "23/3.0 = " << a / static_cast<double>(b) << endl; // Floating-point division result
    cout << "23/3 = " << static_cast<double>(a/b) << endl; // Floating-point division result
    cout << "c = " << c << endl; // Output the result of the division
    cout << "c/2 = " << c / 2 << endl; // Output half of the result
    cout << "(a/b) / 2 = " << static_cast<double>(a / b) / 2 << endl; // Integer division result divided by 2
    cout << "(a/b) / 2 = " << static_cast<double>((a / b) / 2) << endl; // Integer division result divided by 2, cast to double
    cout << "a/b/2 = " << a / b / 2 << endl; // Integer division result divided by 2
    cout << "5/6/2.0/4 = " << 5 / 6 / 2.0 / 4 << endl; // Floating-point division result

    cout << fixed << setprecision(5) << 500.0 << endl; // Set precision for output


    return 0; // Return succes3
}