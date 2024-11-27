# include <iostream>
using namespace std ;
int main ( )
{
     double number_1 , number_2 , result ;
     char user_operator ;
     cout << "Enter number 1 :- " ;
     cin >> number_1 ;
     cout << "Enter number 2 :- " ;
     cin >> number_2 ;
     cout << "Enter an operator :- " ;
     cin >> user_operator ;
     if (user_operator=='+') { result = number_1+number_2 ;}
     else if (user_operator=='-') { result = number_1-number_2 ;}
     else if (user_operator=='*') { result = number_1*number_2 ;}
     else if (user_operator=='/') { result = number_1/number_2 ;}
     else {cout<<"Error !" ;}
     cout << "Result is "<< result ;
     return 0 ;
}
