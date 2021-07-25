// Reverse a number
#include <iostream>
using namespace std;
int main()
{
    int num, lastnum = 0;
    cin >> num;
    while (num != 0)
    {
        int storenum;
        storenum = num % 10;
        lastnum = lastnum * 10 + storenum;
        num = num / 10;
    }
    cout << lastnum;
}