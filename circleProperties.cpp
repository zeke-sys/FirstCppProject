#include <iostream>
#include <cmath> // for M_PI constant

using namespace std;

//Function to calculate the area and circumference of a circle, and volume and surface area of a sphere
int main() {
    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius; // input the radius of the circle
    if (radius <= 0) {
        cout << "Invalid radius. Please enter a positive number." << endl; // check for valid radius
        return 1; // exit with error code
    }
    // Calculate the area and circumference of the circle
    double area = M_PI * radius * radius; // area of the circle
    double circumference = 2 * M_PI * radius; // circumference of the circle
    cout << "Area of the circle: " << area << endl; // print the area
    cout << "Circumference of the circle: " << circumference << endl; // print the circumference

    // Calculate the volume and surface area of the sphere
    double volume = (4.0 / 3.0) * M_PI * pow(radius, 3); // volume of the sphere
    double surfaceArea = 4 * M_PI * pow(radius, 2); // surface area of the sphere
    cout << "Volume of the sphere: " << volume << endl; // print the volume
    cout << "Surface area of the sphere: " << surfaceArea << endl; // print the surface area    
    return 0; // indicate successful execution
}