#include <iostream>
using namespace std;

int maxnum(int arr[], int n)
{
    int mx=arr[0];
    for (int i = 1; i < n; i++)
    {

        mx = max(arr[i], mx);
    }
    return mx;
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
    cout << endl
         << maxnum(arr, n);
}