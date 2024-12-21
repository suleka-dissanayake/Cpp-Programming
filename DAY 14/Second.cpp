# include <iostream>
using namespace std ;
int main ()
{
     int n1, n2, temp;
     cout << "Enter first integer : ";
     cin >> n1 ;
     cout << "Enter second integer : ";
     cin >> n2 ;
     for (int i=1; i<=n1 && i<=n2 ; i++) {
          if (n1%i == 0 && n2%i==0) {
               temp = i ;
          }
     }
     cout << "The Greatest common Divisor for "<<n1<<" and "<<n2<<" is "<<temp;
     return 0 ;
}
