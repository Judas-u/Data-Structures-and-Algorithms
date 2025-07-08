
#include <iostream>
using namespace std;
int main(){
    int  x = 7;
    int* ptr = &x;
    cout << ptr << endl;   // 0x60ff08
    ptr = ptr + 1;
    cout << ptr << endl << endl ;    // 0x60ff0c
//_____________________________________________

    bool flag = true;
    bool* ptr2 = &flag;
    cout << ptr2 << endl;     // 0x60ff03
    ptr2 = ptr2 + 1;
    cout << ptr2 << endl << endl;    // 0x60ff04
//_____________________________________________

    int a = 4;
    int* ptr3 = &a;
    cout << *ptr3 <<  endl;  // 4
    (*ptr3)++ ;
    cout << *ptr3 << endl;  // 5

}