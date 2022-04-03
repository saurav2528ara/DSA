//partial sort of c++ STL
//We can use Partial Sort of C++ STL. partial_sort uses Heapselect,
//which provides better performance than Quickselect for small M.
//which means that you get the first half of the Heapsort algorithm “for free”. The complexity is “approximately” O(N log(M)), where M is distance(middle-first).
#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector<int> V = { 11, 65, 193, 36, 209, 664, 32 };
	partial_sort(V.begin(), V.begin() + 4, V.end(), greater<int>());

	cout << "first = " << V[0] << "\n";
	cout << "second = " << V[1] << "\n";
	cout << "third = " << V[2] << "\n";
	return 0;
}
