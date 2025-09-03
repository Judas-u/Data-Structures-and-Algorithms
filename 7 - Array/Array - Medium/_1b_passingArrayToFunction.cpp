
#include <iostream>
using namespace std;
void display(int arr[], int size)
{
    for (int i = 0; i <= size - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return;
}
void change(int b[], int size)
{
    b[0] = 100;
}
int main()
{

    int arr[] = {1, 3, 4, 7, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;
    // accessing the elements of arrays in another function
    // updation, passs by value / refrence ?
    display(arr, size);
    change(arr, size);
    display(arr, size);
}