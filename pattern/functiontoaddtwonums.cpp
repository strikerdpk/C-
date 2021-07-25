#include <iostream>
using namespace std;

int addnum(int num1,int num2)
{
    return num1+num2;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<addnum(a,b);
}