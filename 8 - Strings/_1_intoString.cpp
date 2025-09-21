
#include<iostream>
#include<string>
using namespace std;

int main () {
    char str[5] = {'a','b','c','d','e'};
    for(int i=0; i<5; i++){
        cout << str[i] << " " ;
    }
    cout << endl;
    cout << "abc\ndefgh" << endl;

    char ch = 'a';
    cout << (int)ch << endl;
    cout << (int)(str[5]) << endl;

    string str1 = "Adishwar Raj";
    cout << str1 << endl;
    cout << str1[9] << endl;
    cout << str1[10] << endl;
    cout << str1[11] << endl;

    int a, b;
    cin >> a ;
    cin >> b;
    cout << a << " " << b;

}