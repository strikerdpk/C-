//check weather the number is prime or not

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    int n;
    bool flag;
    cin >> n;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "Non-prime";
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "prime num";
    }
}
