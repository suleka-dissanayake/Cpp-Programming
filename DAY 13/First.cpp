# include <iostream>
using namespace std ;
int main ()
{
     int choice , n ;

     cout << endl;

     cout << "Choose a pattern to draw:\n" ;
     cout << endl;
     cout << "1. Right-Angled Triangle\n" ;
     cout << "2. Inverted Triangle\n";
     cout << "3. Square\n";
     cout << "4. Triangle(Pyramid pattern)\n";
     cout << endl ;

     cout << "Enter your choice (1-4) : " ;
     cin >> choice ;

     switch (choice) {

          case 1 :
               cout << "Enter the number of rows : " ;
               cin >> n ;
               cout << endl;
               for (int i=1; i<=n; i++) {
                    for (int j=1; j<=i; j++) {
                         cout << "*" ;
                    }
                    cout << endl;
               }
               break ;

          case 2 :
               cout << "Enter the number of rows : " ;
               cin >>n ;
               cout << endl;
               for (int i=n; i>=1; i--) {
                    for (int j=1; j<=i; j++) {
                         cout << "*" ;
                    }
                    cout << endl;
               }
               break ;

          case 3 :
               cout << "Enter the number of rows : " ;
               cin >> n ;
               cout << endl;
               for (int i=1; i<=n; i++) {
                    for (int j=1; j<=n; j++) {
                         cout << "*" ;
                    }
                    cout << endl;
               }
               break ;

          case 4 :
               cout << "Enter the number of rows : " ;
               cin >> n ;
               for (int i=1; i<=n; i++) {
                    for (int j=1; j<=n-i; j++) {
                         cout << " " ;
                    }
                    for (int j=1; j<=(2*i-1); j++) {
                         cout << "*" ;
                    }
                    cout << endl;
               }
               break;

          default :
               cout << "Invalid ! " ;
     }
     return 0 ;
}
