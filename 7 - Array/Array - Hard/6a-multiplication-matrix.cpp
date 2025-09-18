#include<iostream>
using namespace std;

int main () {
    int m, n, p, q;

    cout << "Enter rows of 1st matrix: ";
    cin >> m;
    cout << "Enter cols of 1st matrix: ";
    cin >> n;

    cout << "Enter rows of 2nd matrix: ";
    cin >> p;
    cout << "Enter cols of 2nd matrix: ";
    cin >> q;

    if(n == p) {
        int a[m][n], b[p][q], res[m][q] = {0};

        cout << "Enter elements of 1st matrix: ";
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        cout << "Enter elements of 2nd matrix: ";
        for(int i = 0; i < p; i++) {  // Fixed loop range from `m` to `p`
            for(int j = 0; j < q; j++) {  // Fixed loop range from `n` to `q`
                cin >> b[i][j];
            }
        }

        // Matrix multiplication
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {  // Fixed increment `j++`
                res[i][j] = 0;
                for(int k = 0; k < n; k++) {  // Fixed `k < p` to `k < n`
                    res[i][j] += a[i][k] * b[k][j];
                }
            }
        }

        // Print result matrix
        cout << "Resultant matrix: " << endl;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < q; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
    } else {
        cout << "The matrices cannot be multiplied!" << endl;
    }

    return 0;
}
