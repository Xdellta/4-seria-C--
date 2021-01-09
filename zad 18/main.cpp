//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 18 | Seria: 4 | Lp. 21
//==================================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
     //Nykiel Sebastian 2AG Program 18
    setlocale(LC_CTYPE, "Polish");
    srand(time(0));

    int orly = 0,reszki = 0,kostka1,kostka2,rzut;

    while(kostka1 != kostka2)
    {
        rzut++;
        kostka1 = rand() % 6 + 1;
        kostka2 = rand() % 6 + 1;

        cout << "\t  RZUT  nr." << rzut << endl;
        cout << " Kostka 1 :" << kostka1 << endl;
        cout << " Kostka 2 :" << kostka2 << endl << endl;
    }
    cout << "\n \t Ilość rzutów: " << rzut << endl << endl;

    return 0;
}
