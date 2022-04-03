// An efficient solution is to use hashing.
//  We create a hash table and store elements and their frequency counts as key-value pairs. 
// Finally, 
// we traverse the hash table and print the key with the maximum value.  

#include <bits/stdc++.h>
using namespace std;
 
int mostFrequent(int arr[], int n)
{
    // Insert all elements in hash.
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
 
    // find the max frequency
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;
}
 
// driver program
int main()
{
    int arr[] = { 1, 5, 2, 0, 3, 2, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << mostFrequent(arr, n);
    return 0;
}