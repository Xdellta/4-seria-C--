//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 14 | Seria: 4 | Lp. 21
//==================================================================================

#include <iostream>
#include <time.h>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    int a,b,c,d;

    cout << "Podaj liczbê: ";
    cin >> a;
    cout << endl << "---------------------------------" << endl;

    cout << "Cyfry z której jest zbudowana:" << endl;

     do{
     b=(a%10);
     cout << b << endl;

     b=(a-b);

     b=(b/10);

     a=b;
     }

     while(b);
 return 0;
}


