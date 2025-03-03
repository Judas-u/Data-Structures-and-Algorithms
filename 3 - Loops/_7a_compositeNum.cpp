#include<iostream>
using namespace std;
int main () {
    int n, isComposite = 0;
    cout <<"Enter a number : ";
    cin >> n;
    
    for(int i = 2; i <= n-1; i++ ) {
        if(n % i == 0) {
            cout << n << " is a composite number" << endl; 
            isComposite = 1;
            break;
        }
    }

    if(isComposite == 0) {
        cout << n << " is not a composite number" << endl;
    }
}
