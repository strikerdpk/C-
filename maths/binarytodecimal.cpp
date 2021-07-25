#include <iostream>
#include <cmath>

using namespace std;

int btod(int n)
{
    int lnum, fnum = 0, counter = 0;
    while (n != 0)
    {
        lnum = n % 10;
        fnum = pow(2, counter)*lnum + fnum;
        n = n / 10;
        ++counter;
    }
    return fnum;
}

int main()
{
    int bnum;
    cin >> bnum;
    cout << endl
         << btod(bnum) << endl;
}