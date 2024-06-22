#include <iostream>
 
using namespace std;
int main()
{
    cout << " Welcome to the right triangle area calculator \n\n"; // tells user about use
    cout << " How is your day? \n\n ";
    string day;
    std::getline(std::cin, day);

    cout << " Good!\n\n"
         << "Now hopefully you arent using this to cheat on first grade math\n\n";
    double legnth; // data type
    double hight;  // data type
    double area;   // data type
    cout << " enter legnth: "; // prompts user to write values for legnth and hight
    cin >> legnth;             // extracts info
    cout << " enter hight: ";
    cin >> hight;                                          // extracts info
    // calculations
    area = legnth * hight / 2;                             // calculate
    cout << " your area is equal to: " << area << " \n\n"; // telling user
    cout << " bye skibdi slicer ";                         // skibidi
}