#include <iostream>
#include <queue>
using namespace std;
int main()
{
   queue<string> q;

   q.push("soft");
   q.push("eng");
   q.push("saurav");

   cout<<" first Front Element: "<<q.front()<<endl;
   q.pop();
   cout<<" second Front Element: "<<q.front()<<endl;

   q.pop();
   cout<<" third Front Element: "<<q.front()<<endl;

   cout<<"Empty or not: "<<q.empty()<<endl;
}
