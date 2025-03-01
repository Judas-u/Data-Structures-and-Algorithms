#include<iostream>
using namespace std;
int main() {
    int x = 4;
    int y = 0;
    while(x >= 0){
        x--;
        y++;
        if( x == y){
            continue;
        }
        cout << x << " " <<  y << endl;
    } 

}

// #include<iostream>
// using namespace std;
// int main () {
//     int x = 4, y = 0;
//     while(x >= 0) {
//         x--;  // Decrement x
//         y++;  // Increment y
//         if(x == y)
//             continue;  // Skip remaining statements in this iteration
//         else
//             cout << x << " " << y << endl;  // Print values of x and y
//     }
// }
