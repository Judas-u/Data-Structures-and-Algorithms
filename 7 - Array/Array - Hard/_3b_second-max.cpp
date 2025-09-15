#include<iostream>
#include<climits>
using namespace std;

int main() {
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;

    int matrix[m][n]; 

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int maximum = INT_MIN;
    int second_maximum = INT_MIN;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] > maximum) {
                second_maximum = maximum;
                maximum = matrix[i][j];
            } else if (matrix[i][j] > second_maximum && matrix[i][j] != maximum) {
                second_maximum = matrix[i][j];
            }
        }
    }

    cout << "Maximum element: " << maximum << endl;
    if (second_maximum != INT_MIN)
        cout << "Second maximum element: " << second_maximum << endl;
    else
        cout << "No second maximum element found." << endl;

    return 0;
}
