#include <iostream>
using namespace std ;
int main ()
{
     int rows ;
     cout << "Enter number of rows that you want to appear : " ;
     cin >> rows ;
     for (int i=1; i<=rows; i++) {
          for (int j=1; j<=i; j++) {
               cout << "*" ;
               }
          cout << endl;
     }
     return 0 ;
}
