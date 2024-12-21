# include <iostream>
using namespace std ;
int main ()
{
     string st[4] = {"bus", "way", "car", "van"} ;
     int num [] = {1,2,3,4,5} ;
     cout << st[0] << endl ;
     cout << num[1] <<endl;
     int len= sizeof(st)/sizeof(st[0]);
     cout << len;
     return 0 ;
}
