#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    vector<int> V;

    vector <int> a(5,1);
    cout<<"print a: "<<endl;
    for (int i : a)
    {
        cout<<i<<" "<<endl;
    }


    cout<<"capacity: "<<V.capacity()<<endl;
    
    V.push_back (1);
    cout<<"Capacity: "<<V.capacity()<<endl;
    cout<<"Size: "<<V.size()<<endl;

    V.push_back(2);
    cout<<"capacity: "<<V.capacity()<<endl;
    cout<<"Size: "<<V.size()<<endl;

    V.push_back(3);
    cout<<"capacity: "<<V.capacity()<<endl;
    cout<<"Size: "<<V.size()<<endl;

    cout<<"first: "<<V.front()<<endl;
    cout<<"last: "<<V.back()<<endl;

    //pop and push
    cout<<"Befor Pop: "<<endl;
    for (int i : V)
    cout<<i<<" "<<endl;

    V.pop_back();

    cout<<"after pop: "<<endl;
    for (int i : V)
    cout<<i<<" "<<endl;

    cout<<"Before clear: "<<V.size()<<endl;

    V.clear();

    cout<<"After clear: "<<V.size()<<endl;


}