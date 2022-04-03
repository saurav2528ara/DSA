#include <bits/stdc++.h>
#include <array>
using namespace std;
int main(){
array<int,4> a = {1,2,3,4};

int size = a.size();
for (int i=0; i<size; i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    cout<<"Element at index 2: "<<a.at(1)<<endl;;
    cout<<"Empty or not "<<a.empty()<<endl;

    cout<<"print first element: "<<a.first()<<endl;
    cout<<"print last element: "<<a.end()<<endl;

}
