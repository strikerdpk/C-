// output:
//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {
        int space = n - i;

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
            
        }
        for (int k=1; k <= i; k++)
            {
                cout << k << " ";
            }

        cout << endl;
    }
}