#include <iostream>
using namespace std;

int insertionsort(int arr[], int n)
{
    int current = 0;

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;
        current = arr[i];
        while (j >= 0 && arr[j] > current)
        {

            j = i - 1;
            if (arr[j] > current)
            {
                arr[j] = arr[j + 1];
            }
            j--;
        }
        arr[j+1]=current;
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> n;
    }
    insertionsort(arr, n);
}