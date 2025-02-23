

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    for (int i = 1; i <= n; i++) { // Removed the semicolon here
        cout << "hello " << endl;
    }

    return 0; // Added return statement for good practice
}


