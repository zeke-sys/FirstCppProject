#include <iostream>
#include <string>
#include <cctype> // for toupper function

using namespace std;

//Building initials string for a user based on their first, middle, and last names
// This program prompts the user for their first, middle, and last names, then constructs and displays their initials

int main() {
    string firstName, lastName; // Declare variables for first, middle, and last names

    cout << "Enter your first name: "; // Prompt user for first name
    getline(cin, firstName); // Read full line for first name

    cout << "Enter your middle name (optional, press Enter to skip): "; // Prompt user for middle name
    string middleName; // Declare variable for middle name
    getline(cin, middleName); // Read full line for middle name (optional)

    cout << "Enter your last name: "; // Prompt user for last name
    getline(cin, lastName); // Read full line for last name

    // Construct initials string
    string initials;
    auto to_initial = [](const string &s) -> char {
        return s.empty() ? '\0' : static_cast<char>(std::toupper(static_cast<unsigned char>(s[0])));
    };
    if (!firstName.empty()) initials += to_initial(firstName);
    if (!middleName.empty()) initials += to_initial(middleName);
    if (!lastName.empty()) initials += to_initial(lastName);
    // another way to write this would be with the substring function:
    // string initials = firstName.substr(0, 1) + middleName.substr(0, 1) + lastName.substr(0, 1);
    // but using toupper and string(1, ...) is more straightforward for initials
    // and it ensures that the initials are uppercase

    cout << "Your initials are: " << initials << endl; // Output the initials

    return 0; // Indicate successful execution
}