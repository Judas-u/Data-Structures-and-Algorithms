#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> v;  // Declare 2D vector

    // Define row vectors
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5};
    vector<int> v3 = {6, 7, 8, 9};

    // Push rows into 2D vector
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);

    cout << v[2][3] << endl;  // Output: 9

    return 0;
}
