#include <iostream>
#include <stack>
using namespace std;

int main()
{
   stack<string> s;

   s.push("soft");
   s.push("eng");
   s.push("saurav");

   cout<<"Top Element: "<<s.top()<<endl;

   s.pop();
   cout<<"Top Element: "<<s.top()<<endl;
   cout<<"size: "<<s.size()<<endl;

   s.pop();
   cout<<"Top Element: "<<s.top()<<endl;
   cout<<"size: "<<s.size()<<endl;

   cout<<"Empty or not: "<<s.empty()<<endl;
}
