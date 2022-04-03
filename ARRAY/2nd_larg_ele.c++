#include <bits/stdc++.h>
using namespace std;

void secondLargest (int arr[] , int size)
{
	int first,second;

	second = first = INT_MIN;
	for (int i = 0; i<size; i++)

	if(arr[i] > first)
	{
		second = first;
		first = arr[i];
	}
	else if (arr[i] > second && arr[i] != first)
	{
		second = arr[i];
	}
	cout<<second<<endl;
	
}
int main()
{
	int arr[] = {2,4,6,8,10,21};
	int n = sizeof(arr)/sizeof(arr[0]);
	secondLargest (arr,n);
	return 0;
}