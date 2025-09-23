
#include<iostream>
#include<string>
using namespace std;

int main () {
    string str = "Adishwar Raj";
    cout << str << endl;

    // str[1] = 'D';
    
    for(int i=0; str[i] !='\0'; i++){
        if(i % 2 == 0) str[i] = 'A';
    }
    cout << str << endl;
}
