// program to find the factorial
# include <iostream>
using namespace std ;
int main()
{
     int factorial = 1;
     int i ;
     cout << "Enter number : ";
     cin >> i ;
     for (i ;  i>0;  i--) {
          factorial *= i;
     }
     cout <<"The factorial of this number is "<< factorial ;
     return 0;
}
