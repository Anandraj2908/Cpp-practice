#include <iostream>
using namespace std;

int fac(int n)
{
    int value=n;
    for(int i=1;i<n;i++)
    {
       value=value*(n-i);
    }
    return value;
}
int main()
{
    int n;
    cin>>n;
   
    cout<<fac(n);
}