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

    // Wave Print Logic
    for(int i = 0; i < m; i++) { 
        if(i % 2 != 0) {  
            for(int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
        } else {  
            for(int j = n - 1; j >= 0; j--) {
                cout << arr[i][j] << " ";
            }
        }
        cout <<  endl;
    }
    return 0; 
}
