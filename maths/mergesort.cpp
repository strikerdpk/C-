#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - (l + 1);
    int n2 = r - mid;
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[(mid + 1) + i];
    }

    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            a[k] = a[i];
            k++;
            i++;
        }
        else
        {
            a[k] = b[j];
            k++;
            j++;
        }
        while (i < n1)
        {
            a[k] = a[i];
            k++;
            i++;
        }
        while (j < n2)
        {
            a[k] = b[j];
            j++;
            k++;
        }
    }
}

int MergeSort(int arr[], int l, int r)
{
    int mid = (l + r);
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);

    merge(arr, l, mid, r);
}

int main()
{
    int arr[6] = {8, 7, 5, 4, 9, 6};
    MergeSort(arr, 0, 6);
}