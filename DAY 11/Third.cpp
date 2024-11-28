# include <iostream>
using namespace std ;
int main ()
{
     int x = 15 ;
     cout << "While loop output : \n" ;
     while (x<10) {
          cout << "x is " << x << endl ;
          x++ ;
     }
     cout << "Do-While loop output : \n" ;
     do {
          cout << "x is " << x << endl ;
          x ++ ;
     }
     while (x<10) ;
     return 0 ;
}
