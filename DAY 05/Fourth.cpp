// A program that asks the user for the principal amount, rate of interest, time period (yearly)
// This program calculate and display both simple and compound interest
 # include <iostream>
 # include <cmath>
 using namespace std ;
 int main()
 {
     double p_amount , rate , time , s_int , c_int  ;
     cout << "Enter principal amount " ;
     cin >>p_amount ;
     cout << "Enter rate of interest " ;
     cin >> rate ;
     cout << "Enter time period :- " ;
     cin >> time ;
     s_int = ( p_amount*rate*time )/100 ;
     c_int = p_amount * pow ((1+rate /100 ),time) - p_amount ;
     cout << "Simple interest is " << s_int <<endl;
     cout << "Compound interest is " << c_int ;
     return 0 ;
 }
