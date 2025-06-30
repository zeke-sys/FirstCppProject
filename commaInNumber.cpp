#include <iostream>
#include <string>

using namespace std;

// This program takes a number as input and adds a comma before the last three digits

// It checks if the number is less than 4 digits, and if so, it prints the number as is.
// If the number is 4 digits or more, it adds a comma before the last three digits and prints the updated number.
int main() {
    cout << "Enter number: ";
    string number;
    cin >> number;
    // Check if the number is less than 4 digits
    if (number.length() < 4) {
        cout << number << endl; // If less than 4 digits, print the number as is
        return 0; // Exit the program
    }
    
    // If the number is 4 digits or more, we need to add a comma before the last three digits
    // We will use substr to get the left part of the number and the right part (last three digits)
    // Then we will combine them with a comma in between
    int num_length = number.length();
    int start_index = 0; // Initialize start_index to 0, which is the beginning of the string

    // The left part is everything except the last three digits, and the right part is the last three digits
    // We use substr to get the left part and the right part
    string left_substr = number.substr(start_index, num_length - 3); // Get the left part of the number
    string right_substr = number.substr(num_length - 3, 3); // Get the right part of the number (last three digits)
    
    // Combine the left part and the right part with a comma in between
    string updated_num = left_substr + "," + right_substr; // Concatenate the left part, comma, and right part
    
    // Print the updated number with the comma
    cout << updated_num << endl;
    
    return 0; // Exit the program
}