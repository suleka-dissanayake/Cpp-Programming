#include <iostream>
using namespace std ;
int main ()
{
     int rows, space ;
     cout << "Enter number of rows that you want to appear : " ;
     cin >> rows ;
     for (int i=1; i<=rows; i++) {
          for (space=rows-1; space>=1; space--){
                    cout<<" " ; }
          for (int j=0; j<=1; j++) {
               cout << "*" ;}
          cout << endl;
     }
     return 0 ;
}

