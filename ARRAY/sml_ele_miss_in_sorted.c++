//find the smallest elements
//missing in a sorted array.
// Input: {0, 1, 2, 6, 9}, n = 5, m = 10 
// Output: 3

#include <bits/stdc++.h>
using namespace std;

int missElement (int arr[], int start, int end)
{
    if (start > end)
    return end+1;

    if (start != arr[start])
    return start;

    int mid = (start + mid)/2;
    
    if (arr[mid] == mid)

    return missElement (arr, mid+1, end);
    return missElement (arr, start, mid);
}
int main()
{
    int arr[] = {0,1,2,3,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Smallest element missing is: "<<missElement(arr,0,n-1)<<endl;
}