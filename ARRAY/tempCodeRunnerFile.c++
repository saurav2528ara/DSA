#include <bits/stdc++.h>
using namespace std;
void arrange(int arr[], int n)
{
    int i=-1;
    int pivot=0;
    for (int j=0; j<n; j++)
    {
        if (arr[j] > pivot)
        {
            i--;
            swap (arr[i],arr[j]);
        }
    }    
}
int main()
{
    int arr[] = {0,9,-7,2,-12,11,-20};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrange(arr,n);
    return 0;
}