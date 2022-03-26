#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int pos = 0;
        cin >> n;
        int ans = (n + 1) / 2;
        cout << ((n & 1) ? -ans : ans) << "\n";
    }
    return 0;
}