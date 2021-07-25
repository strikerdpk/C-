#include <iostream>
using namespace std;

int addtwobinary(int num1, int num2)
{
    int rem = 0, ans = 0;
    while (num1 != 0)
    {
        if (num1 % 10 == 0 && num2 % 10 == 0)
        {

            ans = ans * 10 + rem;
            rem = 0;
        }
        else if (num1 % 10 == 1 && num2 % 10 == 0 || num1 % 10 == 0 && num2 % 10 == 1)
        {
            if (rem == 1)
            {
                ans = ans * 10;
                rem = 1;
            }
            else
            {
                ans = ans * 10 + 1;
                rem = 0;
            }
        }
        else
        {
           
            ans = ans * 10 + rem;
            rem = 1;
        }
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    return ans;
}

int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << endl
         << addtwobinary(num1, num2) << endl;
}