# include <iostream>
using namespace std ;
int main ( )
{
     int age ;
     string full_name, course, address, registration_number ;
     cout << "Enter your full name :- " ;
     getline (cin, full_name) ;
     cout << "Enter your age :- " ;
     cin >> age ;
     cout << "Enter your full address :- " ;
     cin.ignore() ;
     getline (cin, address) ;
     cout << "Enter your course :- " ;
     getline (cin, course) ;
     cout << "What's your registration number ? " ;
     getline (cin, registration_number) ;
     cout<< endl ;
     cout << "Your full name :- " << full_name << endl ;
     cout << "Your age :- " << age << endl ;
     cout << "Your full address :- " << address << endl ;
     cout << "Your course :- " << course << endl ;
     cout << "Your registration number :- " << registration_number << endl ;
     return 0 ;
}
