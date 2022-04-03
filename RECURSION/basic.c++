#include <iostream>
using namespace std;

void display (int n)
{
    if (n<1)
    return;
    else
    {
        cout<<n;
        display(n--); //function calling
        cout<<n;
    }
}
void main()
{
    int n = 3;
    display (3);
}