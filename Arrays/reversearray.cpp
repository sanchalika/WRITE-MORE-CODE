//reverse the array

#include <iostream>
#include<vector>
using namespace std;
void reverse(int arr[], int n)
{
    int i = 0, j = n - 1;
    while (i <= j)
    {
        // swap(arr[i],arr[j]);
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}
void printA(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[6]={2, 3 ,4, 5, 6, 8};
    int brr[5]={2,6,3, 9, 4};
    reverse(arr, 6);
    reverse(brr,5);
    printA(arr,6);
    printA(brr,5);
    return 0;

}