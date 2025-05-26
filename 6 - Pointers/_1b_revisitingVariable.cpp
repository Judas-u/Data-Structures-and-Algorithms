
#include<iostream>
using namespace std;
int main () {
    int x = 9;
    cout << &x;
    cout << " ";  //     0x61ff0c
    float y = 9;
    cout << &y;   //     0x61ff08
}
