#include <iostream>
#include <map>
using namespace std;
int main(){

   map<int,string> m;

   m[1] = "saurav";
   m[2] = "coder";
   m[3] = "programmer";
   m.insert({5,"bheen"});

   // for (auto i : m)
   // cout<<i.first<<endl;
   // 1 2 3  <-- output

   for (auto i: m)
   cout<<i.first<<" "<<i.second<<endl;
/*  output -->  1 saurav
               2 coder
               3 programmer
               5 bheen
               */

    cout<<"find 3--> "<<m.count(3)<<endl;

   //  m.erase (m.begin());
   //  for (auto i : m)          
   //  cout<<i.first<<" "<<i.second<<endl;
   // erase first map

   //  m.erase (5);
    // it means remove 5 bheem
   //  cout<<"after erase: "<<endl;
   //  for (auto i : m)
   //  cout<<i.first<<" "<<i.second<<endl;

    //Find() iterator
    auto it = m.find(5);
    for (auto i=it; i!=m.end(); i++)
    cout<<(*i).first<<endl;
}
