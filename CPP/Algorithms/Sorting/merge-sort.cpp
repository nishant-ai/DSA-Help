#include <iostream>
using namespace std;

void merge(int a[], int mid, int l, int r)
{
    int i, k, j;
    int b[r-l+1];
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            b[k] = a[i];
            i++;
            k++;
        }
        else
        {
            b[k] = a[j];
            j++;
            k++;
        }
    }

    while (i <= mid)
    {
        b[k] = a[i];
        k++;
        i++;
    }
    while (j <= r)
    {
        b[k] = a[j];
        k++;
        j++;
    }

    for (int i = l; i <= r; i++)
    {
        a[i] = b[i];
    }
}

void mergeSort(int a[], int l, int r)
{
    int mid;
    if (l < r)
    {
        mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        merge(a, mid, l, r);
    }
}

int main()
{
    int arr[] = {19, 12, 13, 24, 35, 26};
    mergeSort(arr, 0, 5);
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
