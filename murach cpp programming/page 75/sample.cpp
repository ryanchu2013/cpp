#include <iostream>
#include <string>

using namespace std;
int main()
{
    cout << " guest book\n\n";
    
    string first_name;
    cout << "first name :\t";
    cin >> first_name;
    cin.ignore(100,'\n');

    char middle_initial;
    cout << "middle initial:\t";
    middle_initial = cin.get();
    cin.ignore(100, '\n');

    string last_name;
    cout << "last name :\t";
    getline(cin, last_name);

    string city;
    cout <<"city:\t\t";
    getline(cin, city);

    string country;
    cout <<"country:\t";
    getline(cin, country);

    cout << "\nENTRY\n"
    << first_name + ' ' + middle_initial + "." + last_name +'\n'
    << city + "," + country + "\n\n";
}
