//     *
//    **
//   ***
//  ****

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        // print spaces

        int spaces = n - row;
        while (spaces)
        {

            cout << " ";
            spaces = spaces - 1;
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col = col + 1;
        }
        cout << endl;
        row = row + 1;
    }
}