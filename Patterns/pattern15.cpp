// A
// B C
// D E F
// G H I J

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    char count = 'A';
    while (row <= n)
    {

        int col = 1;
        while (col <= row)
        {
            cout << count
                 << " ";
            count += 1;
            col = col + 1;
        }
        cout << endl;

        row = row + 1;
    }
}