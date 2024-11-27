# include <iostream>
using namespace std ;
int main ( )
{
     int n1, n2 ;
     cout << "Enter first number :- ";
     cin >> n1 ;
     cout << "Enter second number :- ";
     cin >> n2;
     n1 = n1 + n2 ;
     n2 = n1 - n2;
     n1 = n1 - n2 ;
     cout << "After swap :-" << endl;
     cout << "Number 1 is " <<n1 << endl;
     cout << "Number 2 is " << n2 ;
}
