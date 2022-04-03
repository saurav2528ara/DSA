#include <iostream>
using namespace std;

int f_largest (int arr[], int n)
{
    int max = arr[0];
    
    for (int i=0; i<n; i++)
    if (arr[i] > max)
    max = arr[i];

    return max;
}
int main()
{
    int arr[] = {10,324,45,90,9808};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<" Largest element: "<<f_largest(arr,n);

    return 0;
}