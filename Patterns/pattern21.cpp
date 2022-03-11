// 12345
//  2345
//   345
//    45
//     5

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {

        int spaces = (row - 1);
        while (spaces)
        {
            cout << " ";
            spaces = spaces - 1;
        }
        int col = 1;
        while (col <= n-row+1)
        {
            cout << col;
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}