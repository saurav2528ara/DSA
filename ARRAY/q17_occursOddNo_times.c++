#include <bits/stdc++.h>
using namespace std;
int arrange(int arr[], int n)
{
    int l=0;
    for (int i=0; i<n; i++) //traverse
    l = l ^ arr[i];
    return l;
}
int main()
{
    int arr[] = {1,2,3,2,3,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<arrange(arr,n);

    return 0;
}