// output:
//       *
//     * * *
//   * * * * *
// * * * * * * *
// * * * * * * *
//   * * * * *
//     * * *
//       *

#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int p = 2; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = n; i >= 1; i--)
    {
        int space = n - i;
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << "*";
        }
        for (int p = 2; p <= i; p++)
        {
            cout << "*";
        }
        cout << endl;
    }
}