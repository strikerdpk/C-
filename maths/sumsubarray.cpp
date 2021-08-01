#include <iostream>
using namespace std;

int sumsubarray(int arr[], int n)
{
    int sum = 0, sum1 = 0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i; j < n; j++)
        {
            sum = sum + arr[j];
            cout<<endl<<sum<<endl;
        }
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sumsubarray(arr, n);
}