
#include<iostream>
using namespace std;
int main (){

    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Arrays : ";
    for(int i=0; i<=n-1; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for(int i=0; i<=n-1; i++){
        sum = sum + arr[i];
    }
    cout << sum << " ";
}