#include <bits/stdc++.h>
using namespace std;
void arrange(int arr[], int n)
{
    int l[n],j = 0;
     for (int i = 0; i < n ; i++)
     {
         if (arr[i]>=0)
         {
             l[j++]=arr[i];
         }
     }
     for (int i=0; i<n; i++)
     {
         if(arr[i]<=0)
         {
             l[j++]=arr[i];
         }
     }
     memcpy(arr,l,sizeof(l));
}
int main()
{
    int arr[] = {1,-1,3,2,-7,-5,11,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    arrange(arr,n);
    for (int i=0; i<n; i++)
    cout<<arr[i]<<" ";
    return 0;
}