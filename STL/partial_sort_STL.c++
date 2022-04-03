#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> Vec{5,7,4,2,8,6,1,9,0,3};

    std::partial_sort(Vec.begin(), Vec.begin() + 4, Vec.end());

    for (int val : Vec) {
        std::cout <<val << " ";
    }
    return 0;
}