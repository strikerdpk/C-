// output:
//     *****
//    *****
//   *****
//  *****
// *****

#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i <= n; i++)
    {
        int space = (n - i);
        for (int j = 0; j < space; j++)

        {
            cout << " ";
        }
        for (int k = 0; k <= n; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}