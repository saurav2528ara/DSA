//Replace every array element by multiplication of previous and next
//Input: arr[] = {2, 3, 4, 5, 6}
//Output: arr[] = {6, 8, 15, 24, 30}

#include <bits/stdc++.h>
using namespace std;

void modify (int arr[], int n)
{
    int prev = arr[0];
    arr[0] = arr[0]*arr[1];

    for (int i=1; i<n-1; i++)
    {
        int current = arr[i];
        arr[i] = prev*arr[i+1];
        prev=current;
    }
    arr[n-1] = prev*arr[n-1];
}
int main()
{
    int arr[] = {2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    modify (arr,n);
    for (int i=0; i<n; i++)
    cout<<arr[i]<<" ";
}