// Asks the user to input temperature
// Then the program should convert between celcius an farenheit
# include <iostream>
using namespace std ;
int main ()
{
    double C, F ;
    cout << "Enter temperature in celcius  " ;
    cin >> C ;
    F = (C*9/5)+32 ;
    cout <<  "It is "<< F << " farenheits" ;
    return 0 ;
}
