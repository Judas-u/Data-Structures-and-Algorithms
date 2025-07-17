
#include<iostream>
using namespace std;
int main() {
//     int x = 5;
//     int y = 5;
//     cout << &x << endl;
//     cout << &y;
// 
    int x = 4;
    int* p = &x;    // int* is a "data_type"
    int y = 9;
    int* p2 = &y;

    cout << p <<  endl;
    cout << p2;
}