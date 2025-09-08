#include<bits/stdc++.h>
using namespace std;
int main () {
    vector<int> v;
    v.push_back(4);
    v.push_back(1);
    v.push_back(7);
    v.push_back(3);
    v.push_back(9);
    v.push_back(5);

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;

    sort(v.begin(), v.end());   //  Assecending Order : "sort"
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}