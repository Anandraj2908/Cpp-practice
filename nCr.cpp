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
    int n,r;
    cin>>n>>r;
    int nf=fac(n);
    int nrf=fac(n-r);
    int rf=fac(r);
    int ncr=nf/(nrf*rf);
    cout<<ncr;

}