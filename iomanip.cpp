//NAME : MUHAMMAD HANIF AZRI BIN AZIZAN
//DATE : 1/12/2020
//TITLE : IOMANIP

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   double a = 3.1415926534;
   double b = 2006.0;
   double c = 1.0e-10;

   cout << endl <<"default: ";
   cout << endl << a << endl << b << endl << c ;

   cout << endl << endl << "fixed: " << fixed;
   cout << endl << a << endl << b << endl << c ;

   cout << endl << endl << "scientific: " << scientific;
   cout << endl << a << endl << b << endl << c ;

    return 0;
}
