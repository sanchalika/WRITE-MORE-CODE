#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int s[n];
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
        }
        int d[n];
        for (int k = 0; k < n; k++)
        {
            cin >> d[k];
        }
        int count = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j] == d[j])
            {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}