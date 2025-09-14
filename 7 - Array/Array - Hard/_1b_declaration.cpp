#include<iostream>
using namespace std;
int main() {
    int arr[3][3] = {1,4,5,6,2,5,9,4,8};

    for(int i = 0; i <= 2; i++) {
        cout << arr[0][i] << " ";
    }
    cout <<  endl;

    for(int i = 0; i <= 2; i++) {
        cout << arr[1][i] << " ";
    }
    cout <<  endl;

    for(int i = 0; i <= 2; i++) {
        cout << arr[2][i] << " ";
    }
    cout <<  endl;
}