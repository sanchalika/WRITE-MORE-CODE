#include <iostream>
using namespace std;
int main()
{

    int number = 0;
    int n, petya, vasya, tonya;
    cin >> n;
    while (n--)
    {
        cin >> petya >> vasya >> tonya;
        if (petya + vasya + tonya >= 2)
        {
            number += 1;
        }
    }
    cout << number << endl;
    return 0;
}