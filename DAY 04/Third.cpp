# include<iostream>
using namespace std ;
int main()
{
    string f_name, l_name ;
    cout<< "What's your first name : " ;
    getline (cin,f_name) ;
    cout << "What's your last name : " ;
    getline (cin, l_name) ;
    cout << "Your full name is " << f_name.append(l_name) ;
    return 0 ;
}
