#include <iostream>
#include <vector>
using namespace std;

// Function to modify the first element of a 2D vector
void change2D(vector<vector<int>>& arr) {  
    arr[0][0] = 100;  // Modifies the first element
}

int main() {   
    // Define a 2D vector
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << arr[0][0] << endl;  // Output: 1

    change2D(arr);  // Modify 2D vector

    cout << arr[0][0] << endl;  // Output: 100

    return 0;
}
