#include <iostream>
using namespace std;

void excp_two (int arr[], int n)
{
	for (int i=0; i<n; i++)
	{
		int except = 0;
		for (int j=0; j<n; j++)
		if (arr[j]> arr[i])
		except++;

		if (except >=2)
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[] = {2,4,6,8,10,12,18};
	int n= sizeof(arr)/sizeof(arr[0]);
	excp_two (arr,n);
	return 0;
}