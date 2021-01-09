//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 5 | Seria: 4 | Lp. 21
//==================================================================================

#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    srand(time(0));

    int a;

    do
    {
     a = rand() % 100;
     cout << " Losowa liczba: " << a << endl;
    }
    while(a%5);

    return 0;
}
