#include <iostream>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int t1=0;
    int t2=1;
    for(int i=1;i<=n;i++)
    {
        cout<<sum<<" ";
        sum=t1+t2;
        t1=t2;
        t2=sum;
        
    }
}