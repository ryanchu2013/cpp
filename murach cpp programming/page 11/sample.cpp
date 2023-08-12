#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // print name of program
    cout << "circle calculator" << endl
         << endl;
    // get radius from user
    double radius;
    cout << "Enter radius: ";
    cin >> radius;
    // calculations
    double pi = 3.14159;
    double diameter = 2 * radius;
    double circumfrence = diameter * pi;
    double area = pi * pow(radius, 2.0);

    // round to 1 decimal place
    circumfrence = round(circumfrence * 10) / 10;
    area = round(area * 10) / 10;

    // write output to control
    cout << "diameter: " << diameter << endl
         << "circumfrence: " << circumfrence << endl
         << "area: " << area << endl
         << "bye! have a good day!" << endl
         << endl;

    // return value that indicates normal program exit
    return 0;
}
