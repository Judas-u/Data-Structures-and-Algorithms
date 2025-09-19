#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m = 7;
    vector<vector<int>> v;

    // Initializing Pascal's Triangle
    for (int i = 0; i < m; i++) {
        vector<int> a(i + 1, 1); // Initialize row with 1s
        v.push_back(a);
    }

    // Compute Pascal's Triangle values
    for (int i = 2; i < m; i++) {  // Start from row 2 (as first two rows are always 1)
        for (int j = 1; j < i; j++) {  
            v[i][j] = v[i - 1][j - 1] + v[i - 1][j];  
        }
    }

    // Print Pascal's Triangle
    for (int i = 0; i < m; i++) {
        for (int j = 0; j <= i; j++) {
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
