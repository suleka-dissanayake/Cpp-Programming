#include <iostream>
using namespace std;

int main() {

    int m, n;
    cout << "Enter the number of rows : ";
    cin >> m;
    cout << "Enter the number of columns : ";
    cin >> n;

    int arr[m][n];

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << "Enter element for arr[" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < m; ++i) {
        int rowSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += arr[i][j];
        }
        cout << "Sum of row " << i << " is: " << rowSum << endl;
    }

    for (int j = 0; j < n; ++j) {
        int colSum = 0;
        for (int i = 0; i < m; ++i) {
            colSum += arr[i][j];
        }
        cout << "Sum of column " << j << " is: " << colSum << endl;
    }

    return 0;
}
