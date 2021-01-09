//Patryk Piotrowski
//2 AG Informatyk | gr. 2
//zad. 3 | Seria: 4 | Lp. 21
//==================================================================================

#include <iostream>
using namespace std;
int main()
{
 int a;
 cout << "Podaj liczbe: ";
 cin >> a;
 while (0<=a)
 {
 cout << "Podaj liczbe: ";
 cin >> a;
 }
 cout << "To nie jest liczba dodatnia:" << a << endl;
 return 0;
}
