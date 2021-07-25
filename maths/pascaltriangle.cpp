#include <iostream>
using namespace std;

int factorial(int a)
{
    int a1 = 1;
    while (a != 0)
    {
        a1 = a1 * a;
        --a;
    }
    return a1;
}
int main()
{
    int n, c;
    float ans;
    cin >> n;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            c = i - j;
            ans = factorial(i) / (factorial(c) * factorial(j));
            cout << ans;
        }
        cout << endl;
    }
}