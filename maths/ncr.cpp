#include <iostream>
using namespace std;

int factorial(int n)
{
    int n1 = 1;
    while (n != 0)
    {
        n1 = n1 * n;
        --n;
    }
    return n1;
}

int main()
{
    int r, n, a;
    float ans;
    cin >> n >> r;
    a = n - r;

    ans = factorial(n) / (factorial(a) * factorial(r));

    cout << endl
         << ans;
}