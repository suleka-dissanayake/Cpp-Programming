#include <iostream>
using namespace std;
int main ()
{
     for (int i=1; i<=100; i++)
     {
          bool isPrime = true ;
          if (i==1){ isPrime=false; }
          else {
               for (int j=2; j<=i/2; j++){
                    if (i%j == 0) {
                         isPrime = false;
                         break;
                    }
               }
          }
          if (isPrime) {
               cout << i << endl;
          }
     }
     return 0;
}
