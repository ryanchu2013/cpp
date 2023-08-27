#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    // use time to get a int value
    int elapsed_seconds = time(nullptr);

    // send the random number generator
    srand(elapsed_seconds);

    // roll the  first die
    int die1 = rand() % 6; // die1 is >=0 and < 6
    die1 = die1 + 1; // die2 is >=1 and <= 6

    // roll the second die
    int die2 = rand() % 6; // die 2 is >=0 and <6
    die2 = die2 + 1; // die 2 is >=1 and >=6

    //write output to counsole
    cout << " your  roll:" << die1 << " " << die2;
}