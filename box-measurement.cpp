
#include <iostream>
using namespace std;

int main()
{
    // Define variables
    double length, width, height, volume, surface;

    // Prompt user to collect data
    cout << "Enter length, width and height in inches:" ;

    // Read user entering data
    cin >> length >> width >> height;

    // Compute the volume of a box
    volume = length * width * height ;

    // Compute the surface of a box
    surface = 2 * (width * length + height * length + height * width);

    // Display calculated results in volume and surface.
    cout << "For a box with length = " << length << ", width " << width << ", height = " << height << endl;
    cout << "the volume is " << volume << "cubic inches and the surface is " << surface << " square inches" << endl;

    /* Execution sample:
    Enter length, width and height in inches: 12 8 7
    For a box with length = 12, width 8, height = 7
    the volume is 672cubic inches and the surface is 472 square inches
    */

    return 0;
}
