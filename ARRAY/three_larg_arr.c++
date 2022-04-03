#include <bits/stdc++.h>
using namespace std;
void threeLargest(int arr[], int size)
{
	int first, second, third;

	third = first = second = INT_MIN;
	for(int i = 0; i < size; i++)
	{
		
		if (arr[i] > first)
		{
			third = second;
			second = first;
			first = arr[i];
		}

		else if (arr[i] > second)
		{
			third = second;
			second = arr[i];
		}

		else if (arr[i] > third)
			third = arr[i];
	}

	cout << "Three largest elements are "<<first<<" "<<second<<" "<<third<<endl;
}
int main()
{
	int arr[] = { 12, 13, 1, 10, 34, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	threeLargest(arr, n);
	return 0;
}

