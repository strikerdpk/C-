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
    int a;
    cin >> a;
    cout << factorial(a) << " ";
}