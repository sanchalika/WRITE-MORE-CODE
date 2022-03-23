#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        int mini = INT_MAX;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (mini > arr[i])
            {
                mini = arr[i];
            }
            sum = sum + arr[i];
        }
        int res = sum - mini;
        cout << res << endl;
    }
    return 0;
}