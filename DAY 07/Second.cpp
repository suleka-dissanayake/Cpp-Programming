# include <iostream>
using namespace std ;
int main ( )
{
     int age = 25 ; bool isStudent = true ;
     bool x = (age > 18 && isStudent) ;
     bool y = (age < 18 || isStudent) ;
     bool z = ! (age > 18 || isStudent) ;
     if ( x && z ) { cout << "True !" ; }
     else { cout << "False !" ; }
     return 0 ;
}
