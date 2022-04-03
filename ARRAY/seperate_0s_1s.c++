#include <bits/stdc++.h>
using namespace std;
void modify (int arr[], int n)
{
	int j=-1;
	for (int i=0; i<n; i++)
	{
		if (arr[i] == 0)
		{
			j++;
			swap(arr[i], arr[j]);
		}
	}
	for (int i=0; i<n; i++)
	cout<<arr[i]<<" ";
}
int main()
{
    int arr[] = {0,1,0,0,1,1,1,0,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    modify(arr, n);
}