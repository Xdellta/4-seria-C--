//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 12 | Seria: 4 | Lp. 21
//==================================================================================

#include <iostream>
#include <cstdlib>
#include <math.h>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    int a;

    cout << "Podaj liczbê: ";
    cin >> a;

    while (a<=0)
    {
        cout << "Pierwiastek z liczby ujemnej nie istnieje! :/" << endl;
        cout << "--------------------------------------------" << endl;

        cout << "Podaj liczbê: ";
        cin >> a;
    }

    cout << sqrt(a);

    system("PAUSE >nul");

    return 0;
}
