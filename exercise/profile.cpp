#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    string first_name;
    string middle_name;
    string last_name;
    string favorite_color;
    cout << " Welcome to the profile maker! \n\n" << " Please enter your first name \n\n";
    getline(cin, first_name);
    cout << " Please enter your middle name \n\n";
    getline(cin, middle_name);
    cout << " Please enter your last name \n\n";
    getline(cin, last_name);
    cout << " Please enter your favorite color \n\n";
    getline (cin, favorite_color);
    cout << " My first name is: " << first_name << "\n\n" << " My middle name is: " << middle_name << "\n\n" << " My last name is: " << last_name  << "\n\n" << " My favorite color is: " << last_name << "\n\n";
    cout << " Bye!";




}