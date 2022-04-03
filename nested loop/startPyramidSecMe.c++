#include <iostream>
using namespace std;
int main()
{
      int rows = 5;
        int n=0;
    for (int i=1; i<=5; i++)
    {
        for (int j=1; j<=(rows-i); j++)
        {
            cout<<" ";
        }
        for (int k=1; k<=(2*i-1); k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}