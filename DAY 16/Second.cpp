#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows : ";

    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;

    int arr[m][n];

    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << "Enter element for array [" << i << "] [" << j << "] : ";
            cin >> arr[i][j];
        }
    }

    cout << "The 2D array is:" << endl;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int maximum = arr[0][0];
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n; ++j) {
            if(arr[i][j] > maximum) {
                maximum = arr[i][j];
            }
        }
    }
    cout << "Maximum element is " << maximum << endl;

    return 0;
}
