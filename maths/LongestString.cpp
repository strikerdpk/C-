#include <iostream>
using namespace std;

int LongestString(int arr[], int n)
{
    int pdiff = 0, cdiff = 0, ccount, newcount = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        pdiff = cdiff;
        cdiff = arr[i + 1] - arr[i];
        if (pdiff == cdiff)
        {
            count += 1;
            ccount = count;
        }
        else
        {
            ccount = count;
            count = 0;
        }
        newcount = max(ccount, newcount);
    }

        return newcount+2;
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
         << LongestString(arr, n) << endl;
}
