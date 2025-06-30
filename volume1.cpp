#include <iostream>

using namespace std;

/*This program computes the volume (in liters) of a six-pack of soda cans and
the total volume of a six-pack and a two-liter bottle.*/

int main() {
    const double CAN_VOLUME_LITERS = 0.355; // volume of one soda can in liters
    const double BOTTLE_VOLUME_LITERS = 2.0; // volume of a two-liter bottle in liters

    // Calculate the volume of a six-pack of soda cans
    double sixPackVolume = 6 * CAN_VOLUME_LITERS;

    // Calculate the total volume of a six-pack and a two-liter bottle
    double totalVolume = sixPackVolume + BOTTLE_VOLUME_LITERS;

    // Output the results
    cout << "Volume of a six-pack of soda cans: " << sixPackVolume << " liters" << endl;
    cout << "Total volume of a six-pack and a two-liter bottle: " << totalVolume << " liters" << endl;

    return 0; // Indicate successful execution
}