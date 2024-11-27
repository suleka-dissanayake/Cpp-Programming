# include <iostream>
using namespace std ;
int main()
{
    string name;
    cout<< "Enter name " ;
    getline(cin,name) ;
    cout << "There are " << name.length() << " total characters" ;
    return 0 ;
}
