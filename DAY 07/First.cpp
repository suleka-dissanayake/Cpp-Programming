# include <iostream>
using namespace std ;
int main ( )
{
     int age = 25 ; bool isStudent = true ;
     bool x = (age > 18 && isStudent) ;
     bool y = (age < 18 || isStudent) ;
     bool z = ! (age > 18 || isStudent) ;
     cout << "The result of x is " << x<< endl ;
     cout << "The result of y is " << y<< endl ;
     cout << "The result of z is " << z<< endl ;
     return 0 ;
}
