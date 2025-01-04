#include <iostream>
using namespace std ;
int main ()
{
     int decimal ;
     int binary [100] ;
     cout << "Enter a decimal number : " ;
     cin >> decimal ;
     if (decimal == 0) {
          cout << "0" ;
     }
     int temp = decimal ;
     int i = 0 ;
     while (temp>0) {
          binary [i] = temp % 2 ;
          temp = temp / 2 ;
          i++ ;
     }
     cout << "The binary value is : " ;
     for (int j=i-1; j>=0; j--) {
          cout << binary[j] ;
     }
     return 0 ;
}
