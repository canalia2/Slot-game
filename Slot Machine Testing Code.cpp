#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <stdio.h>
using namespace std;




/*void table() {

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
} */
int main()
{

    int a, b, c, d, e, f, g, h, i;
    int bet = 1;
    double payout;
    double Winnings = 0;
    int double7 = 0;
    int triple1= 0, triple2 = 0, triple3 = 0, triple4 = 0, triple5 = 0, triple6 = 0, triple7 = 0, triple8 = 0, triple9 = 0, single7 = 0;


    //Prints payout table
    //table();

    // Request user to place a bet
   /* cout << "How many credits would you like to bet? 1, 2, or 3? ";
    cin >> bet;
    cout << endl;

    //Loop incase user doesn't input correct bet.
    while ((bet != 1) && (bet != 2) && (bet != 3)) {

        cout <<"Sorry, you can't bet that amount. Please enter 1, 2, or 3. " << endl << endl;
        cin >> bet;
        cout << endl;

    }
    */

    srand(time(0));

    for(int x = 1; x <= 10000000; x++) {



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

   /* cout << a << setw(3) << b << setw(3) << c << endl;
    cout << d << setw(3) << e << setw(3) << f << endl;
    cout << g << setw(3) << h << setw(3) << i << endl << endl;
*/
    //If statement conditions for a winning combination.
    if ((d == e && e == f) || (d == 7 || e == 7 || f == 7)) {

            // Winning combination for 2 7s.
        if ((d == 7 && e == 7 && f != 7) || (d != 7 && e == 7 && f == 7) || (d == 7 && e != 7 && f == 7))    {

            payout = bet * 5;
            double7 += 1;
           // cout << "Congratulations, you won " << payout << " credits!" << endl;

            }

        //Winning combinations for 3 numbers that are the same other than 7.
        else if ((d != 7 && e != 7 && e!= 7) && (d == e && e == f)) {

                payout = bet * 35;

                if(d == 1)  {
                    triple1 += 1;
                }
                else if(d == 2)  {
                    triple2 += 1;
                }
                else if(d == 3) {
                    triple3 += 1;
                }
                else if(d == 4)   {
                    triple4 += 1;
                }
                else if(d == 5)    {
                    triple5 += 1;
                }
                else if(d == 6) {
                    triple6 += 1;
                }
                else if(d == 7) {
                    triple7 += 1;
                }
                else if(d == 8)  {
                    triple8 += 1;
                }
                else if(d == 9) {
                    triple9 += 1;
                }
             //   cout << "Congratulations you won " << payout << " credits!" << endl;
            }

        //Winning combination with one 7.
        else if ((d == 7 && e != 7 && f != 7) || (d != 7 && e == 7 && f != 7) || (d != 7 && e != 7 && f == 7)) {

                payout = bet * 1;
                single7 += 1;
              //  cout << "Congratulations you won " << payout << " credits!" << endl;
        }

        //Winning combination of 3 7s.
        else if (d == 7 && e == 7 && f == 7) {

            payout = bet * 79;
            triple7 += 1;
          //  cout << "Congratulations you won " << payout << " credits!" << endl;
        }


    }
    //All other losing combinatiions.

    else        {
       // cout <<"Sorry you lost! " << endl << "It's nothing personal, you should still totally consider hiring me." << endl;
        payout = bet * 0;
    }


    Winnings = Winnings + payout;

    if(x == 1000)   {
        cout << "\n1000 plays: " << Winnings/1000;
        cout << "\n3 ones: " << triple1 << "\n3 twos: " << triple2 << "\n3 threes: " << triple3 << "\n3 fours: " << triple4;
        cout << "\n3 fives: " << triple5 << "\n3 sixes: " << triple6 << "\n3 sevens: " << triple7 << "\n3 eights: " << triple8;
        cout << "\n3 nines: " << triple9 << "\n2 sevens: " << double7 << "\n1 seven: " << single7;
    }

    else if(x == 10000) {
        cout << "\n\n10000 plays: " << Winnings/10000;
        cout << "\n3 ones: " << triple1 << "\n3 twos: " << triple2 << "\n3 threes: " << triple3 << "\n3 fours: " << triple4;
        cout << "\n3 fives: " << triple5 << "\n3 sixes: " << triple6 << "\n3 sevens: " << triple7 << "\n3 eights: " << triple8;
        cout << "\n3 nines: " << triple9 << "\n2 sevens: " << double7 << "\n1 seven: " << single7;
    }

    else if(x == 100000) {
        cout << "\n\n100000 plays: " << Winnings/100000;
        cout << "\n3 ones: " << triple1 << "\n3 twos: " << triple2 << "\n3 threes: " << triple3 << "\n3 fours: " << triple4;
        cout << "\n3 fives: " << triple5 << "\n3 sixes: " << triple6 << "\n3 sevens: " << triple7 << "\n3 eights: " << triple8;
        cout << "\n3 nines: " << triple9 << "\n2 sevens: " << double7 << "\n1 seven: " << single7;
    }

    else if(x == 1000000) {
        cout << "\n\n1000000 plays: " << Winnings/1000000;
        cout << "\n3 ones: " << triple1 << "\n3 twos: " << triple2 << "\n3 threes: " << triple3 << "\n3 fours: " << triple4;
        cout << "\n3 fives: " << triple5 << "\n3 sixes: " << triple6 << "\n3 sevens: " << triple7 << "\n3 eights: " << triple8;
        cout << "\n3 nines: " << triple9 << "\n2 sevens: " << double7 << "\n1 seven: " << single7;
    }



}
    cout << "\n\n10000000 plays: " << Winnings/10000000;
    cout << "\n3 ones: " << triple1 << "\n3 twos: " << triple2 << "\n3 threes: " << triple3 << "\n3 fours: " << triple4;
    cout << "\n3 fives: " << triple5 << "\n3 sixes: " << triple6 << "\n3 sevens: " << triple7 << "\n3 eights: " << triple8;
    cout << "\n3 nines: " << triple9 << "\n2 sevens: " << double7 << "\n1 seven: " << single7;
}
