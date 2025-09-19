#include<iostream> 
using namespace std;

int main () {
    int m, n; 

    cout << "Enter rows of the matrix: ";
    cin >> m;
    cout << "Enter cols of the matrix: ";
    cin >> n;

    int arr[m][n]; 

    cout << "Enter elements of the matrix: " << endl;
    for(int i = 0; i < m; i++) {  // Loop through rows
        for(int j = 0; j < n; j++) {  // Loop through columns
            cin >> arr[i][j];  // Store input values into the matrix
        }
    }

    cout << endl; 

    // Wave Print Logic
    for(int i = 0; i < m; i++) { // Loop each row
        if(i % 2 == 0) {  
            // If the row index is EVEN, print from left to right
            for(int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        } else {  
            // If the row index is ODD, print from right to left
            for(int j = n - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
        cout << endl; 
    }

    return 0; 
}
