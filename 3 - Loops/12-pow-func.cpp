#include<iostream>
using namespace std;
int  main () {
    int a,  b;
    cout << "Enter base : ";
    cin >> a;
    cout << "Enter exponent : ";
    cin >> b;

    bool flag = true;  //  conditions
    if(b < 0){
        flag = false;
        b = -b;
    }
    float power = 1;
    for(int i=1; i<=b; i++){   /// only his is the main code 
        power = power * a;
    }
    if(flag == false){  //  conditions
        power = 1/power;
        b = -b;
    }
    if(a == 0 && b == 0) cout << "Not defined";
    else cout << a << " Raise to the power " << b << " is " << power;
}