#include <iostream>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string str;
        cin >> str;
        int count1 = 0, count0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (str[i] == '1')
            {
                count1++;
            }
            else
            {
                if(str[i]=='0')
                count0++;
            }
        }
        
        cout << (2 * min(count1, count0)) + (count0 != count1) << endl;
    }

    return 0;
}