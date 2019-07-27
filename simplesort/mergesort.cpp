#include <iostream>

using namespace std;

//int n = sizeof(arr) / sizeof(arr[0]);
void print(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    cout << endl;
}

void merge(int arr[],int left, int mid, int right)
{
    int i,j,k;
    int n1 = (mid - left) + 1;
    int n2 = (right - mid);
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
    {
        L[i] = arr[left + i];
    }
    for (j = 0; j <n2; j++)
    {
        R[j] = arr[mid + j+1 ];
    }
   // cout<<"right- ";
    //print(R, n2);
    //cout<<"left- ";
   // print(L, n1);
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[],int left, int right)
{

    if (left < right)
    {
        int mid = (left + right) / 2;
        mergeSort(arr,left, mid);
        mergeSort(arr,mid + 1, right);
        merge(arr,left, mid, right);
    }
}
int main()
{
    int arr[] = {1, 17, 25, 8, 31, 3, 41, 99, 2};
    print(arr,9);
    mergeSort(arr,0, 8);
    print(arr,9);
    return 0;
}