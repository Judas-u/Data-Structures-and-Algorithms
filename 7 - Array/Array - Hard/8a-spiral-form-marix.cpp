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
    for(int i = 0; i < m; i++) {  
        for(int j = 0; j < n; j++) {  
            cin >> arr[i][j];  
        }
    }
    cout << endl; 

    // Defining boundaries
    int minr = 0, minc = 0;
    int maxr = m - 1, maxc = n - 1;

    while (minr <= maxr && minc <= maxc) {
        // Move Right
        for (int j = minc; j <= maxc; j++) {
            cout << arr[minr][j] << " ";
        }
        minr++; // Move boundary down

        // Move Down
        for (int i = minr; i <= maxr; i++) {
            cout << arr[i][maxc] << " ";
        }
        maxc--; // Move boundary left

        // Move Left
        for (int j = maxc; j >= minc && minr <= maxr; j--) { 
            cout << arr[maxr][j] << " ";
        }
        maxr--; // Move boundary up

        // Move Up
        for (int i = maxr; i >= minr && minc <= maxc; i--) { 
            cout << arr[i][minc] << " ";
        }
        minc++; // Move boundary right
    }

    return 0;
}
