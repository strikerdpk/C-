// output:
// ****
// *  *
// *  *
// ****
#include <iostream>
using namespace std;
int main()
{
    int i, j;
    for (i = 0; i < 5; i++)
    {
        if (i == 0 || i == 4)
        {
            for (j = 0; j < 4; j++)
            {
                cout << "*";
            }
        }
        else if ((0 < i) && (i < 4))
        {
            cout << "*  *";
        }
        cout << endl;
    }
}