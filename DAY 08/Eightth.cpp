# include <iostream>
# include <cmath>
using namespace std ;
int main ( )
{
     double l1, l2, l3 ;
     cout << "Enter value 1 :- ";
     cin >> l1 ;
     cout << "Enter value 2 :- ";
     cin >> l2 ;
     cout << "Enter value 3 :- ";
     cin >> l3 ;
     if (((l1+l2) >=l3) && ((l1+l3)>=l2) && ((l2+l3)>=l1))
     {
          cout << "The triangle is valid" ;
     }
     else
     {
          cout << "Invalid !" ;
     }
     return 0;
     }
