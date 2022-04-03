#include <bits/stdc++.h>
using namespace std;

void rotateArray (int arr[], int start, int end)
{
    int temp;
    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}
void reverse (int arr[], int d, int n)
{
    if (d==0)
    return;

    d= d%n;

    rotateArray (arr, 0, d-1);
    rotateArray (arr, d, n-1);
    rotateArray (arr, 0, n-1);
}
void printArray (int arr[], int n)
{
    for (int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse (arr,2,n);
    printArray (arr,n);
    return 0;
}