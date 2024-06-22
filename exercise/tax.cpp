#include <iostream>

using namespace std;

int main()
{
    double price;
    double finalprice;
    cout << "Please enter your product price \n\n ";
    cin >> price;
    finalprice = price / 10 + price;
    cout << " This is your price after tax: " << finalprice;
    
}


   
