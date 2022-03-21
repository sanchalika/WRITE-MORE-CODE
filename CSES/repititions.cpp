#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <unordered_set>
#define loop(i, n, k) for (ll i = 0; i < n; i += k)
using ld = long double;
#define pb push_back
typedef long long ll;

using namespace std;
int main()
{

    string str;
    cin >> str;
    int ans = 0, count;

    for (int i = 0; i < int(str.length()); i++)
    {
        count = 1;
        while (str[i] == str[i + 1])
        {
            count++;
            i++;
        }
        ans = max(ans, count);
    }
    cout << ans;
    return 0;
}