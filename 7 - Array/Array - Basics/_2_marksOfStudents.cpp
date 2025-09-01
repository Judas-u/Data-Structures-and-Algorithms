
#include<iostream>
using namespace std;
int main () {

    int marks[6] ;
    // input___________________
    for(int i=0; i<=5; i++) {
        cin >> marks[i];
    }

    //output_________________
    for(int i=0; i<=5; i++){
        if(marks[i] < 35) 
        cout << i <<" " ;
    }
}