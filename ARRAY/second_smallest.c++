#include <iostream>
using namespace std;

void sLargest (int arr[], int n)
{
	int first,second;

	second = first = INT_MAX;
	for (int i=0; i<n; i++)

	if (arr[i]< first)
	{
		second = first;
		first = arr[i];
	}
	else if (arr[i]<second && arr[i] != first)
	{
		second = arr[i];
	}
	cout<<"Second largest element: "<<second<<endl;
}
int main()
{
	int arr[] = {2,4,8,6,10,21,25};
	int n = sizeof(arr)/sizeof(arr[0]);
	sLargest (arr,n);
	return 0;
}