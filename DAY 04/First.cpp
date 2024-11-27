# include <iostream>
# include <cmath>
using namespace std ;
int main()
{
    double num_1 , num_2;
    cout << "Enter first number :- " ;
    cin >> num_1;
    cout << "Enter second number :- " ;
    cin >> num_2 ;
    double power = pow(num_1,num_2) ;
    double sq_1 = sqrt (num_1) ;
    double sq_2 = sqrt (num_2) ;
    cout << num_1 << " raised to the power of " << num_2 << " is " << power << endl ;
    cout << "Square root of " << num_1 << " is " << sq_1 << endl ;
    cout << "Square root of " << num_2 << " is " << sq_2 << endl ;
    return 0 ;
}
