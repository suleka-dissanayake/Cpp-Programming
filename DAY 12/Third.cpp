#include<iostream>
using namespace std ;
int main ()
{
     int num, digit1, digit2, digit3;

     cout << "Enter three digit number : " ;
     cin >> num ;

     if (num<100 || num>999) {
          cout << "Enter valid three digit number ! " ;
     }
     digit1 = num / 100 ;
     digit2 = (num / 10) % 10 ;
     digit3 = num % 10 ;

     if (digit1 > digit2) {
          int temp = digit1 ;
          digit1 = digit2 ;
          digit2 = temp ;
     }
     if (digit1 > digit3) {
          int temp = digit1 ;
          digit1 = digit3 ;
          digit3 = temp ;
     }
     if (digit2 > digit3) {
          int temp = digit2 ;
          digit2 = digit3 ;
          digit3 = temp ;
     }


     return 0 ;
}
