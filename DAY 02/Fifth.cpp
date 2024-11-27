# include <iostream>
using namespace std ;
int main ()
{
    string city , country ;
    cout << "Enter your country :- " ;
    getline ( cin , country ) ; // instead of cin >> country ;
    cout << endl ;
    // getline method gets the whole input
    cout << "Enter your city :- " ;
    getline ( cin , city ) ;

    cout << "You live in " << city << " ," << country ;
    return 0 ;
}
