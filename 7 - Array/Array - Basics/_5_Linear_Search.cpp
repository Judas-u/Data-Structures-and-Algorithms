
#include<iostream>
using namespace std;
int main () {

    int n;
    cout << "Enter size of Array : ";
    cin >> n;

    int arr[n];
    cout << "Enter Arrays : ";
    for(int i=0; i<=n-1; i++){
        cin >> arr[i];
    }

    int x;
    cout << "Enter the element you want to search : ";
    cin >> x;

    // Search _____________________________
    // Check Marks ________________________

    bool flag = false;
    for(int i=0; i<=n-1; i++){
        if(arr[i] == x) flag = true; 
    }
    if(flag == true) cout << "Element found ! Congrats";
    else cout << "Not Present" << " " << endl;
    
}