#include <iostream>

using namespace std;
int main()
{
    // print name of program
    cout << "gallon converter" << endl;
    // get gallons from user
    double gallons;
    cout << "enter gallons";
    cin >> gallons;

    // convert gallons to liters
    double liters = gallons * 3.7854;

    // write output to console
    cout << "liters:" << liters << endl;
    cout << "bye!" << endl;
}