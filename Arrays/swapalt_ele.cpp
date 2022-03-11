
#include <iostream>
#include <vector>
using namespace std;
void swapalt(int arr[], int n)
{
    int i = 0, j = 1;
    while (i < n && j < n)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i += 2;
        j += 2;
    }
}
void printA(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int brr[5] = {1, 2, 3, 4, 5};
    swapalt(arr, 6);
    swapalt(brr, 5);
    printA(arr, 6);
    printA(brr, 5);
    return 0;
}