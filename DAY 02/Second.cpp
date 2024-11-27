// Asks the user to enter the city and country then print "You live in ... city, in .... country"
// WITHOUT "using namespace std:"
# include <iostream>
int main()
{
    std :: string city;
    std :: string country;
    std :: cout << "Enter your city :- \n";
    std :: cin >> city;
    std :: cout << "Enter your country :- \n";
    std :: cin >> country;
    std :: cout << "You live in " << city << " in " << country;
    return 0;
}
