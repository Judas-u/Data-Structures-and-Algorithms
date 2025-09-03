#include<iostream>
using namespace std;
void display(int arr[]){
    for(int i=0; i<=4; i++){
    cout << arr[i] << " " ;
    }
    cout << endl;
    return;
}
void change(int b[]){
    b[0] = 100;
}
int main () {

    int arr[5] = {1,3,4,7,9};
    // accessing the elements of arrays in another function 
    // updation, passs by value / refrence ?
    display(arr);
    change(arr);
    display(arr);
    
}