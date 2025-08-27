
#include<iostream>
using namespace std;
int main () {
    int x = 5;
    int y = 7;
    int* p1 = &x;
    int* p2 = &y;
    cout << *p1 + *p2 << endl;
//_________________________________

    int a, b;
    int* q1 = &a;
    int* q2 = &b;
    cout << "Enetr first number : " ;
    cin >> *q1;
    cout << "Enter second Number : " ;
    cin >> *q2;
    cout << *q1 + *q2;
}