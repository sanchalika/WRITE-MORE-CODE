// 1 2 3 4
// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n + 1 - i; j++)
    //     {
    //         cout << j <<" ";
    //     }
    //     cout << endl;
    // }

    int row=1;

    while(row<=n){
        int col=1;
        while(col<= n+1-row){
            cout<<col<<" ";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    return 0;
}