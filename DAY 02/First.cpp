// Asks the user to enter the city and country then print "You live in ... city, in .... country"
# include <iostream>
using namespace std ;
int main()
{
    string city ;
    string country ;
    cout << "Enter your city :- " ;
    cin >> city;
    cout << "Enter your country :- " ;
    cin >> country;
    cout << "You live in " << city << " in " << country ;
    return 0;
}
