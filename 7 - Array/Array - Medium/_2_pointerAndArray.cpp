
#include<iostream>
using namespace std;
int main (){
    
    int arr[]  = {4, 5 , 6, 7, 8} ;
    int* ptr = arr;

    cout << ptr << endl;
    cout << &arr << endl;
    cout << ptr[0] << endl;

    for(int i=0; i<=4; i++) {
        cout << ptr[i] << " ";
    }

    cout << endl;
    *ptr = 8;  // ptr[0] = 8 (Both are same )
    ptr++;
    *ptr = 9;
    ptr--;
    for(int i=0; i<=4; i++) {
        cout << ptr[i] << " ";
    }
}