#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int A, B, C, D;
        cin >> A >> B >> C >> D;
        int a = (A + D) / 2;
        int b = (A - D) / 2;
        if ((a - b) == A && (a * b) == B && (a / b) == C && (a + b) == D)
        {
            cout << a << " " << b << endl;
        }
        else
        {
            cout << -1 <<" "<< -1 << endl;
        }
    }
    return 0;
}