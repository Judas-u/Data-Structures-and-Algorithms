#include<iostream>
using namespace std;
    int removeElement(int nums[], int n, int val){
        int k = 0;

        for(int i=0; i<n; i++) {
            if(nums[i] != val){
                nums[k++] = nums[i];
                k++;
            }
        }
        return k;
    }

    int main() {
        int n, val;
        cin >> n;

        int nums[n];
        for(int i=0; i<n; i++){
            cin >> nums[i];
        }
        cin >> val;
    
    return 0;

}
