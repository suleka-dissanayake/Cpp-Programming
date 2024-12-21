# include <iostream>
using namespace std ;
int main ()
{
     int n ;
     cout << "Enter the number of elements in array : " ;
     cin >> n;
     int arr [n] ;
     cout << "Enter "<<n<<" of elements : "<<endl;
     for (int i=0; i<n; ++i) {
          cin>>arr[i] ;
     }
     cout << "Normal array elements : " ;
     cout << "{ ";
     for (int i=0; i<n; ++i) {
          cout << arr[i]<<" " ;
     }
     cout << "}" ;
     return 0 ;
}
