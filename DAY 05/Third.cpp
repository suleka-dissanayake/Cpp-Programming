 # include <iostream>
 # include <cmath>
 using namespace std ;
 int main ()
 {
     double pi , r , h, volume, surf_area ;
     pi = 22 / 7 ;
     cout<< "Enter radius " ;
     cin >> r ;
     cout << "Enter height " ;
     cin >> h ;
     volume = M_PI * pow(r,2) * h ;
     surf_area = 2 * M_PI * r * (r+h) ;
     cout << "Volume is " << volume << endl ;
     cout << "Surface area is " << surf_area ;
     return 0 ;
 }
