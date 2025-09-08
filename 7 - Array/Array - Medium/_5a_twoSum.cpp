#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    cout << "Enter The Target: ";
    cin >> x;

    vector<int> v;
    int n;
    cout << "Enter Array size: ";
    cin >> n;

    // Check if the array size is valid
    if (n <= 0) {
        cout << "Array size must be positive!" << endl;
        return 1;
    }
    cout << "Enter Array elements: ";
    for (int i = 0; i < n; i++) {
        int q;
        cin >> q;
        v.push_back(q);
    }
    // Check if the input array has the correct number of elements
    if (v.size() != n) {
        cout << "Error: The number of elements entered does not match the specified array size." << endl;
        return 1;
    }
    // Find and print pairs of indices whose elements sum to the target
    for (int i = 0; i < v.size() - 1; i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == x) {
                cout << "(" << i << "," << j << ")" << endl;
            }
        }
    }
    return 0;
}


