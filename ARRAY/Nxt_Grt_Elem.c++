//Next Greater Element
/*Find the next greater element of every element of a given array of integers
The inner loop looks for the first greater element for the element picked by the outer loop
 If a greater element is found then that element is printed as next, otherwise, -1 is printed.*/
#include <iostream>
using namespace std;

void printNGE (int arr[], int n)
{
    int next;
    for (int i=0; i<n; i++)
    {
        next = -1;
        for (int j = i+1; j<n; j++)
        {
            if (arr[i] < arr[j])
            {
                next = arr[j];
                break;
            }
        }
        cout<<arr[i]<<"-->"<<next<<endl;
    }
}
int main()
{
    int arr[] = {11, 13, 21, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
    printNGE(arr, n);
    return 0;
}