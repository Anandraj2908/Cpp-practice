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
        int a=i;
        for(int k=1;k<=2*i-1;k++)
        {
            if(k<=i)
            {
                cout<<a;
                a--;
            }
            else if (k==i+1)
            {
                a=2;
                cout<<a;
                a++;
            }
            else
            {
                cout<<a;
                a++;
            }
            
        }
        cout<<endl;
    }
}