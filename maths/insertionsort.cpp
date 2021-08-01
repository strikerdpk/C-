#include <iostream>
using namespace std;

int insertionsort(int arr[], int n)
{
    int current;

    for (int i = 1; i < n; i++)
    {
        int j = i - 1;

        current = arr[i];
        while (j >=0 && arr[j] > current)
        {

            if (arr[j] > current)
            {
                arr[j + 1] = arr[j];
            }
            j--;
        }
        arr[j + 1] = current;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
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
    insertionsort(arr, n);
}