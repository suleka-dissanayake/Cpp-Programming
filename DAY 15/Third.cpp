# include <iostream>
# include <algorithm>
using namespace std ;

int main ()
{
     int n, total ;
     cout << "Enter the number of elements in array : " ;
     cin >> n ;

     if (n<=0) {
        cout << "Invalid array size ! " << endl;
        return 1 ;
    }

     int arr [n] ;
     cout << "Enter "<<n<<" of elements : "<<endl;

     for (int i=0; i<n; ++i) {
          cin>>arr[i] ;
          total += arr[i] ;
     }

     cout << "Total : " << total << endl;
     cout << "Maximum value : " << *max_element (arr, arr+n) << endl ;
     cout << "Minimum value : " << *min_element (arr, arr+n) ;

     return 0 ;
}
