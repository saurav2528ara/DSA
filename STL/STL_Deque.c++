#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
   deque<int> d;

   d.push_back (2);
   d.push_front(1);
   for (int i : d)
   cout<<i<<" ";
   cout<<endl;

   cout<<"remove front: ";
   d.pop_front();
   cout<<endl;
   for (int i : d)
   cout<<i<<endl;

   cout<<"before erase"<<d.size()<<endl;
   d.erase (d.begin(), d.begin() + 1);
   cout<<"After erase"<<d.size()<<endl;
   for (int i : d)
   cout<<i<<" "endl;
   



}