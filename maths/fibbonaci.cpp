#include <iostream>
using namespace std;

int fibonacci(int num)
{
    int a = a, b, c, i;
    a = 0;
    b = 1;
    cout << a << b;
    for (i = 1; i <= num; i++)
    {

        c = a + b;
        cout << c<<" ";

        a=b;
        b=c;

    }
    return 0;
}

int main()
{
    int num;
    cin>>num;

    fibonacci(num);
    return 0;
}