# include <iostream>
using namespace std ;
int main ()
{
    int hours;
    int mins ;
    int secs ;
    int tot_hours ;
    int tot_mins ;
    int tot_secs ;
    cout << "Enter the number of hours :- " ;
    cin>> hours;
    cout << "Enter the number of minutes :- " ;
    cin >> mins ;
    cout << "Enter the number of seconds :- " ;
    cin >> secs ;
    tot_hours = hours*3600 ;
    tot_mins = mins*60 ;
    tot_secs = secs+tot_hours+tot_mins ;
    cout<< "The total of the seconds is " << tot_secs ;
    return 0 ;
}
