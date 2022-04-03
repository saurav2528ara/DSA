#include <bits/stdc++.h>
using namespace std;

void kLargest (int arr[], int n, int k)
{
    sort(arr, arr+n, greater<int>());

    for (int i=0; i<k; i++)
    cout<<arr[i]<<" ";
}
int main()
{
int arr[] = {2,4,6,10,21,48};
int n = sizeof(arr)/sizeof(arr[0]);
int k= 3;
kLargest (arr,n,k);
}