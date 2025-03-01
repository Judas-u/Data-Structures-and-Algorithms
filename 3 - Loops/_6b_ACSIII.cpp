#include <iostream>
using namespace std;
int main()
{
    for (int i = 65; i <= 90; i++) // Loop for uppercase letters 'A' to 'Z'
    {
        cout << char(i) << " = " << i << endl; // Print uppercase letter
    }
    
    for (int i = 97; i <= 122; i++) // Loop for lowercase letters 'a' to 'z'
    {
        cout << char(i) << " = " << i << endl; // Print lowercase letter
    }

    return 0;
}
