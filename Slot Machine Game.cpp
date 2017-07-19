#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <string>
using namespace std;




void table() {

    cout << "     Welcome to my Slot Game! "      << endl << endl;
    cout <<"+---------------------------------+" << endl;
    cout <<"|          Payout Table           |" << endl;
    cout <<"|      | 1 Cr. | 2 Cr. | 3 Cr.|   |" << endl;
    cout <<"|1,1,1    35      70     105      |" << endl;
    cout <<"|2,2,2    35      70     105      |" << endl;
    cout <<"|3,3,3    35      70     105      |" << endl;
    cout <<"|4,4,4    35      70     105      |" << endl;
    cout <<"|5,5,5    35      70     105      |" << endl;
    cout <<"|6,6,6    35      70     105      |" << endl;
    cout <<"|7,7,7    79      138    237      |" << endl;
    cout <<"|8,8,8    35      70     105      |" << endl;
    cout <<"|9,9,9    35      70     105      |" << endl;
    cout <<"|7,7       1       2       3      |" << endl;
    cout <<"|7         5      10      15      |" << endl;
    cout <<"+---------------------------------+" << endl << endl;
}
int main()
{

    int a, b, c, d, e, f, g, h, i;
    int bet;
    double payout;

    //Prints payout table
    table();

    // Request user to place a bet
    cout << "How many credits would you like to bet? 1, 2, or 3? ";
    cin >> bet;
    cout << endl;

    //Loop incase user doesn't input correct bet.
    while ((bet != 1) && (bet != 2) && (bet != 3)) {

        cout <<"Sorry, you can't bet that amount. Please enter 1, 2, or 3. " << endl << endl;
        cin >> bet;
        cout << endl;

    }

    srand(time(0));

    //Random number generators for slot reels.

    a = 1 + rand() % 9;
    b = 1 + rand() % 9;
    c = 1 + rand() % 9;
    d = 1 + rand() % 9;
    e = 1 + rand() % 9;
    f = 1 + rand() % 9;
    g = 1 + rand() % 9;
    h = 1 + rand() % 9;
    i = 1 + rand() % 9;

    //Prints lot reels.

    cout << a << setw(3) << b << setw(3) << c << endl;
    cout << d << setw(3) << e << setw(3) << f << endl;
    cout << g << setw(3) << h << setw(3) << i << endl << endl;

    //If statement conditions for a winning combination.
    if ((d == e && e == f) || (d == 7 || e == 7 || f == 7)) {

            // Winning combination for 2 7s.
        if ((d == 7 && e == 7 && f != 7) || (d != 7 && e == 7 && f == 7) || (d == 7 && e != 7 && f == 7))    {

            payout = bet * 5;
            cout << "Congratulations, you won " << payout << " credits!" << endl;

            }

        //Winning combinations for 3 numbers that are the same other than 7.
        else if ((d != 7 && e != 7 && e!= 7) && (d == e && e == f)) {

                payout = bet * 35;
                cout << "Congratulations you won " << payout << " credits!" << endl;
            }

        //Winning combination with one 7.
        else if ((d == 7 && e != 7 && f != 7) || (d != 7 && e == 7 && f != 7) || (d != 7 && e != 7 && f == 7)) {

                payout = bet * 1;
                cout << "Congratulations you won " << payout << " credits!" << endl;
        }

        //Winning combination of 3 7s.
        else if (d == 7 && e == 7 && f == 7) {

            payout = bet * 79;
            cout << "Congratulations you won " << payout << " credits!" << endl;
        }


    }
    //All other losing combinatiions.

    else
        cout <<"Sorry you lost! " << endl << "It's nothing personal, you should still totally consider hiring me." << endl;


}





































