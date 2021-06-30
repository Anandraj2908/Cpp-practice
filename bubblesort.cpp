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
int counter =1;
while(counter<n)
{
    for(int i=0;i<n-counter;i++)
    {
        if(ary[i]>ary[i+1])
        {
            int temp=ary[i];
            ary[i]=ary[i+1];
            ary[i+1]=temp;
        }
    }counter++;
}
    for(int k=0;k<n;k++)
    {
        cout<<ary[k]<<" ";
    }
}