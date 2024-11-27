# include <iostream>
using namespace std ;
int main ()
{
    int x = 20 ;
    int y = 5 ;
    cout << "x is " << x << endl ;
    cout << "y is " << y << endl ;
    y -= x ;
    x += 3 ;
    cout << "y-=x is " << y << endl ;
    cout << "x+= 3 is " << x << endl ;
    x ++ ;
    y *= 2 ;
    cout << "x++ is " << x << endl;
    return 0 ;
}
