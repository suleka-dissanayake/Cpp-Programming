// Getting user inputs for each datatypes
# include <iostream>
using namespace std ;
int main ()
{
    int age ;
    float height ;
    double gpa ;
    char gender ;
    string name ;
    bool checked ;
    // end of creating variables
    cout << "What is your name ? ";
    cin >> name ;
    cout << "What is your age ? " ;
    cin >> age ;
    cout << "What is your average height ? " ;
    cin >> height ;
    cout << "What is your gender ? " ;
    cin >>  gender ;
    cout << "What is your GPA value ?" ;
    cin >> gpa ;
    cout << "Confirm ? " ;
    cin >> checked ;
    cout << name<< " is a string" << endl;
    cout << age<< " is an integer" << endl;

    return 0 ;
}
