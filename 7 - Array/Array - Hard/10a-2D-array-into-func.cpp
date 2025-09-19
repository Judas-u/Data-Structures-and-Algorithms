#include <iostream>
using namespace std;

void change(int a[]) {
    a[0] = 9;  // Modifies the first element of the array
}

void change2D(int arr[][3]) {  // Accepts a 2D array
    arr[0][0] = 100;  // Modifies the first element of the 2D array
}

int main() {   
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    cout << arr[0][0] << endl;  // Output: 1

    change2D(arr);  // Modify 2D array

    cout << arr[0][0] << endl;  // Output: 100

    return 0;
}
