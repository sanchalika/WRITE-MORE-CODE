#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    int l = s.length();
    int ans = 0;
    for (int i = 1; i < l; i++)
    {
        if (s[i] != s[i - 1])
            ans++;
    }
    if (ans & 1)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";

    return 0;
}