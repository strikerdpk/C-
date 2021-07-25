#include <iostream>
using namespace std;

int bubblesort(int arr[], int n)
{
    int k=0;
    while (k<n)
    {
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        ++k;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return -1;
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
    bubblesort(arr, n);
}