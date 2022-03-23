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
        // if (pos >= 0)
        // {
        //     pos -= n;
        // }
        // else
        // {
        //     pos += n;
        // }
        for (int i = 1; i < n; i++)
        {
            if (i % 2 == 0)
            {
                pos = n / 2;
            }
            else
            {
                pos = (-n / 3);
            }
        }
        cout << pos << endl;
    }
}