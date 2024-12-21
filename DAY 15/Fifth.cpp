#include <iostream>
using namespace std;

int main()
{
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    int arr[rows][columns];

    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << "Enter element for arr ["<<i<<"] ["<<j<<"] : ";
            cin >> arr [i] [j] ;
        }
    }

    cout << "The 2D array is:" << endl;
    for(int i = 0; i < rows; ++i) {
        for(int j = 0; j < columns; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
