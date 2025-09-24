#include<iostream>
#include<string>
using namespace std;

int main (){
    int x = 1234511223;
    string s = to_string(x);
    
    cout << s << endl;

    cout << s.length();   // count the no. of digit 
}
