#include<iostream>
using namespace std;

int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (r > n || n < 0 || r < 0) {
        cout << "Invalid input!";
        return 0;
    }

    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n - r);
    int ncr = nfact / (rfact * nrfact);

    cout << "nCr: " << ncr;
    return 0;
}
