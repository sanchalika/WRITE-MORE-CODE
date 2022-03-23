#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        int res;
        cin >> n >> x;
        for (int i = 1; i < n; i++)
        {
            res = 2 * n - x + 1;
        }
        cout << res << endl;
    }

    return 0;
}