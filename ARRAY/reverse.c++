#include <iostream>
using namespace std;

void reverseArray(int arr[], int start, int end)
{
    int temp;

    while (start < end)
    {
        temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;

        start++;
        end--;
    }
}
void printArray(int arr[],int size)
{
    for (int i=0;i<size; i++)
        cout<<arr[i]<<" "<<endl;
    cout<<endl;
}

int main()
{
    int arr[]={10,18,15,36,24,50,38,49};
    int start=0,end=7;
    int n=sizeof(arr)/sizeof(arr[0]);
    printArray(arr,n);
    reverseArray(arr,0,n-1);
    cout<<"Reverse array is "<<endl;
    printArray(arr,n);

    return 0;
}
