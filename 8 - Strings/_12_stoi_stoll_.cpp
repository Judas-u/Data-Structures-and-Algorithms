
#include<iostream>
#include<string>

using namespace std;

int main () {

    string str1 = "123456";
    int  x = stoi(str1);   // string of input
    cout << x + 1 << endl;

    string str = "12345432452352";
    long long y = stoll(str);  // string of long long
    cout << y ;

}