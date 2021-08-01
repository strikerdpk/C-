#include <iostream>
using namespace std;

int arraySwap(int arr1[], int n, int arr2[], int n1)
{
    if (n == n1)
    {
        for (int i = 0; i < n; i++)
        {
            int temp;
            temp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = temp;
        }
        for (int j = 0; j < n; j++)
        {
            cout << arr1[j]<<" ";
        }
        cout << endl;
        for (int j = 0; j < n; j++)
        {
            cout << arr2[j]<<" ";
        }
    }
    else
        cout << "Lenth of arrays are not equal";

    return -1;
}

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }
    int n1;
    cin >> n1;
    int arr2[n1];
    for (int j = 0; j < n; j++)
    {
        cin >> arr2[j];
    }
    arraySwap(arr1, n, arr2, n1);
}