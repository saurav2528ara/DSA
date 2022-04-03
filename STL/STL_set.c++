#include <iostream>
#include <set>
using namespace std;

int main()
{
   set<int> s;

   s.insert (4);
   s.insert (5);
   s.insert (6);
   s.insert (3);

   for (int i : s)
   cout<<i<<endl;
   cout<<endl;

   // Delete first element
   // s.erase (s.begin());
   // for (int i : s)
   // cout<<i<<endl;
   // cout<<endl;

   //Delete second element
   set<int>::iterator it = s.begin();
   it++;
      s.erase (it);
      for (int i : s)
      cout<<i<<endl;

   // s.erase (s.end());
   // for (int i : s)
   // cout<<i<<endl;

   cout<<"5 is present or not--> "<<s.count(5)<<endl;

   set<int>::iterator itr=s.find(5);

   for (auto it=itr; it!=s.end();it++){
      cout<<*it<<" ";
   }cout<<endl;
}