#include<iostream>
#include<climits>
using namespace std;
int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int arr[m][n];
    cout << "Enter matrix elements:\n";
    for (int i = 0; i <= m-1; i++) {
        for (int j = 0; j <= n-1; j++) {  // Fixed loop condition
            cin >> arr[i][j];
        }
    }

    int maximum = INT_MIN;  // Renamed from 'max' to 'maximum'
    for (int i = 0; i <= m-1; i++) {
        for (int j = 0; j <= n-1; j++) {
            if (maximum < arr[i][j]) maximum = arr[i][j];
        }
    }
    cout << "Maximum element: " << maximum << endl;

}
