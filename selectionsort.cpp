#include <climits>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ary[n];
    for(int a=0;a<n;a++)
    {
        cin>>ary[a];
    }
    for(int f=0;f<sizeof(ary) / sizeof(ary[0]);f++)
    {
    for (int i=0;i<sizeof(ary) / sizeof(ary[0]);i++)
    {
        if(ary[i+1]<ary[i])
        {
            int j=ary[i];
            ary[i]=ary[i+1];
            ary[i+1]=j;
        }
    }
    }
    for(int k=0;k<n;k++)
    {
        cout<<ary[k]<<" ";
    }
}