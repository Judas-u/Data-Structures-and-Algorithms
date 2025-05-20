#include<iostream>
using namespace std;

void swap(int &x, int &y) {  // Pass by reference
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Before swap: a = " << a << ", b = " << b << endl;
    swap(a, b);  // Swaps values
    cout << "After swap: a = " << a << ", b = " << b << endl;

    return 0;
}
