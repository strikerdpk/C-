#include <iostream>
using namespace std;

int istriplet(int n1, int n2, int n3)
{
    int flag;
    if (n1 *n1 == n2 * n2 + n3 * n3)
    {
        flag = 1;
    }
    else
        flag = 0;

    return flag;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << endl;

    int flag = istriplet(a, b, c);

    if (flag == 1)
        cout << "Its triplet";
    else
        cout << "its not triplet"<<endl;
}