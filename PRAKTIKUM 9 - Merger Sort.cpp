//Muhammad Rizky Cavendio - 20051397011

#include<bits/stdc++.h>
using namespace std;
 
void merge(int arr[], int l, int m, int r);
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
void merge(int arr[], int l, int m, int r)
{
    int k;
    int n1 = m - l + 1;
    int n2 =  r - m;
 
    int L[n1], R[n2];
 
    for(int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for(int j = 0; j < n2; j++)
        R[j] = arr[m + 1+ j];
 
    int i = 0;
    int j = 0;
    k = l;
     
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
void printArray(int A[], int size)
{
    for(int i = 0; i < size; i++)
        printf("%d ", A[i]);
         
    cout << "\n";
}
int main()
{
    int arr[] = { 12,35,9,11,3,17,23,15,31,20 };
    int arr_size = sizeof(arr) / sizeof(arr[0]);
 
    cout << "Array yang diberikan adalah \n";
    printArray(arr, arr_size);
 
    mergeSort(arr, 0, arr_size - 1);
 
    cout << "\nArray yang diurutkan adalah \n";
    printArray(arr, arr_size);
    return 0;
}
