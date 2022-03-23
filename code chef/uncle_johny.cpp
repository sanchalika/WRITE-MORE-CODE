#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int search(int a[], int l, int r, int k)
{
    if (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == k)
            return m;
        else if (a[m] > k)
            return search(a, l, m - 1, k);
        else
            return search(a, m + 1, r, k);
    }
    else
    {
        return -1;
    }
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, k, m;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        cin >> k;
        m = a[k - 1];
        sort(a, a + n);
        cout << search(a, 0, n - 1, m) + 1 << "\n";
    }
}