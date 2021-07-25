#include <iostream>
#include <cmath>

using namespace std;

bool primenum(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;

}

int main()
{
    int num1, num2;

    cin >> num1 >> num2;

    for (int i = num1; i <= num2; i++)
    {
        if (primenum(i))
        {
            cout << endl
                 << i;
        }
    }
    return 0;
}