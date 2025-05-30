
#include<iostream>
using namespace std;
int main() {
    int x = 123;
    int* p = &x;
    cout << *p << endl;
//____________________________

    int y = 174;
    int* q = &y;
    cout << y << endl;
    *q = 6;
    cout << y;

}