#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the number of rows/columns: ";
    cin >> m;
    int arr[m][m];

    // Input the matrix
    cout << "Enter the matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    // Display the original matrix
    cout << "Original Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // Transpose the matrix (Swap arr[i][j] with arr[j][i])
    for (int i = 0; i < m; i++) {
        for (int j = i + 1; j < m; j++) { // Start from j = i+1 to avoid swapping twice
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    // Display the transposed matrix
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
