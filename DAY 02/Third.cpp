// to get a line space between outputs
# include <iostream>
using namespace std ;
int main ()
{
    string city , country ;
    cout << "Enter your country :- " ;
    cin>> country ;
    cout << endl ;
    getline ( cin , city ) ;
    cout << "Enter your city :- " ;
    cin >> city ;
    cout << "You live in " << city << " ," << country ;
    return 0 ;
}
