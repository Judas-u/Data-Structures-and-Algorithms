#include<iostream>
#include<string>
#include<algorithm> // Include algorithm header for reverse function

using namespace std;

int main () {
    string str = "Adishwar Raj is at PW_ioi";
    cout << str.size() << endl;    // 25
    cout << str.length() << endl << endl;  // 25

    string str1 = "abcd";
    cout << str1 << endl;
    str1.push_back('e');   // abcde
    str1.push_back('f');   // abcdef
    str1.push_back('g');   // abcdefg
    cout << str1 << endl << endl;

    string str2 = "wxyz";
    cout << str2 << endl;
    str2.pop_back();   // wxy
    str2.pop_back();   // wx
    cout << str2 <<  endl << endl;

    //____ ____  " + "  Operator  ____ ____ ____ ____ ____
 
    string s = "abcd";
    cout << s << endl;
    string t = "EFGH";
    s = s + t;        // append
    cout << s << endl << endl;

    //____ ____  " reverse() "  Operator  ____ ____ ____ ____ 

    string strx = "abcdef";
    cout << strx << endl;
    reverse(strx.begin(), strx.end());
    cout << strx << endl;
    
    reverse(strx.begin()+2, strx.begin()+5);
    cout << strx << endl;

    return 0;
}


// Internal pointer variable