#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, length;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        length = s.size();
        if (length > 10)
        {
            cout << s[0] << (length - 2) << s[length - 1] << endl;
        }
        else
        {
            cout << s << endl;
        }
    }
    return 0;
}