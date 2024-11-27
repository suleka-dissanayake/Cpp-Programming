// ask user to input his/ her name and age
//the program should then greet the user with a personalized message & display his/her age
#include <iostream>
using namespace std;
int main ()
{
    string name;
    int age;
    cout << "Enter your name :- ";
    cin>>name;
    cout << "Enter your age :- ";
    cin >> age ;
    cout << "Hello "<<name<<"!"<<" You are "<<age<<" years old" ;
    return 0 ;
}
