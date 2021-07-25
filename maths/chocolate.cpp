#include <iostream>
using namespace std;

int chocolates(int rupee)
{
    int rchocolates = 0;
    int chocolates = rupee;
    int wrappers = chocolates;
    while (wrappers >= 3)
    {
        rchocolates = wrappers / 3;
        wrappers = rchocolates + wrappers % 3;
        chocolates = rchocolates + chocolates;
    }
    return chocolates;
}

int main()
{
    int rupee;
    cin >> rupee;
    cout << chocolates(rupee) << " ";
}