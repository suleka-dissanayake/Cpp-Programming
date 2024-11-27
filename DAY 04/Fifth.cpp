# include <iostream>
using namespace std ;
int main()
{
    string anything ;
    cout << "Type anything " ;
    getline(cin,anything) ;
    anything [0] = 'Q' ;
    cout << anything ;
}
