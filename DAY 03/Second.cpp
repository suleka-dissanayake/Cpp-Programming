# include <iostream>
using namespace std ;
int main ()
{
    int x,y ;
    cout << "Enter two numbers \n" ;
    cin >> x >> y;
    cout << "x+y = " << (x+y) << endl ;
    cout << "x-y = " << (x-y) << endl ;
    cout << "x*y = " << (x*y) << endl ;
    cout << "x%y is " << (x%y) << endl ;
    cout << "x ++ is " << (x++) << endl ;
    cout << x << endl ;
    cout << "++x  is " << (++x) << endl ;
    cout << "y-- is " << (y--) << endl ;
    cout << y << endl;
    cout << "--y is " << (--y) << endl ;
    return 0 ;
}
