#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int res = 0;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int k = i; k < n; k++)
        {
            sum += arr[k];
            if (sum == x)
                res++;
        }
    }
    cout << res << endl;
}