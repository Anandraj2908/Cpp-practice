#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
         cout<<" ";
        }
        
        for(int k=1;k<=2*i-1;k++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>n-i;j--)
        {
         cout<<" ";
        }
        int a=2*(n-i)-1;
        for(int k=1;k<=a;k++)
        {
            cout<<"*";
            
        }
        
        cout<<endl;
   
    }
}