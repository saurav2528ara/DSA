#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> V = {4,5,6,7,8,22,1};
    partial_sort (V.begin(), V.begin() + 6, V.end(),greater<int>());

    cout<<"largest element: "<<V[0]<<"\n";
    return 0;
}