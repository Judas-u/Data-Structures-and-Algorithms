#include<iostream>
using namespace std;
int main () {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int reverse = 0;   // Variable to store the reversed number
    int count = 0;     // To count the digits
    int a = n;         // Store the original number

    while(n > 0) {
        int lastDigit = n % 10;        // Get the last digit
        reverse = reverse * 10 + lastDigit;  // Build the reversed number
        n /= 10;                       // Remove the last digit
        count++;                       // Count the digits
    }

    if(a == 0) {
        cout << "Reversed number: 0" << endl;  // If the input is 0
    } else {
        cout << "Reversed number: " << reverse << endl;  // Output the reversed number
        cout << "Number of digits: " << count << endl;    // Output the number of digits
    }

    return 0;
}
