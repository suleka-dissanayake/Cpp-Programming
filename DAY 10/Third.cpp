# include <iostream>
using namespace std ;
int main ( )
{
     int i, j, lower, upper ;
     cout << "Enter lower : ";
     cin >> lower ;
     cout << "Enter upper : ";
     cin >> upper ;
     cout <<"\n"<< "Primary numbers between " << lower << " and " << upper << " are :" << "\n"<<endl;
     for (int i=lower; i<=upper; i++)
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
