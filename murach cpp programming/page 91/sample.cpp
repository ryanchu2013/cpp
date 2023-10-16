#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << "invoice total calculator 1.0\n\n";
    
    // get subtotal from user
    double subtotal;
    cout << " enter a subtotal: ";
    cin >> subtotal;

    // determine discout percent based on subtotal
    double discount_percent;
    if (subtotal >= 200) {
        discount_percent = .2;
    } else if ( subtotal >= 100) {
        discount_percent = .1;
    }  else {
        discount_percent = .05;
    }

    // calculate and round results
    double discount_amount = subtotal + discount_percent;
    discount_amount = round(discount_amount * 100) / 100;

    double invoice_total = subtotal - discount_amount;
    invoice_total = round (invoice_total * 100) / 100;

    // write the results date to the console
    cout << " discount percent:" << discount_percent << endl
    << " discount amount:" << discount_amount << endl
    << " invoice total:" << invoice_total << endl << endl;

    cout << " bye!\n\n";
}