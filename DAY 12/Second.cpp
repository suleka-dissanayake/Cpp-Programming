# include <iostream>
using namespace std ;
int main ()
{
     int side1, side2, side3 ;

     cout << "Enter the lengths of three sides of the triangle : " ;
     cin >> side1>> side2>> side3 ;

     if ((side1+side2>side3) && (side1+side3>side2) && (side2+side3>side1)) {
          if (side1==side2 && side2==side3) {
               cout << "Triangle Type: Equilateral Triangle" ;
          }
          else if (side1==side2 || side2==side3) {
               cout << "Triangle Type: Isosceles Triangle" ;
          }
          else {
               cout << "Triangle Type: Scalene Triangle" ;
          }
     }
     else {
          cout << "The given sides do not form a valid triangle!" ;
     }

     return 0 ;
}
