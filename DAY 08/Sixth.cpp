# include <iostream>
using namespace std ;
int main ( )
{
     int n1 , n2 , n3 ;
     cout << "Enter no 1 :-" ;
     cin >> n1;
     cout << "Enter no 2 :-" ;
     cin >> n2;
     cout << "Enter no 3 :-" ;
     cin >> n3;
     if (n1 > n2 && n1 > n3) { cout <<n1<<" is the biggest"; }
     else if (n2 > n1 && n2 > n3) { cout <<n2<<" is the biggest"; }
     else { cout <<n3<<" is the biggest"; }
     return 0;
}
