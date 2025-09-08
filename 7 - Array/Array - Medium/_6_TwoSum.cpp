#include<iostream>
#include<vector>
using namespace std;
int main () {
    int n;
    cout <<  " Enter target : ";
    cin >> n;

    vector<int> v;
    int x;
    cout << "Enter size array : ";
    cin >> x;

    cout << "Enter Array element : ";
    for(int i=0; i<x; i++){
        int q;
        cin >> q;
        v.push_back(q);
    }
    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if(v[i] + v[j] == x){
                cout << "(" << i <<"," << j <<")"<< endl;
            }
        }
    }
    return 0;
}
