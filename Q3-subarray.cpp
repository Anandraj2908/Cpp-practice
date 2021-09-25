#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No. of element in array"<<endl;
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    {
        cout<<"Enter the no."<<a+1<<" element ";
        cin>>arr[a];
    }
    int s=0;
    int su=0;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        su=0;
        for(int j=0;j<=n-i;j++)
        {
             s=0;
             for(int k=i;k<n-j;k++)
             {
                 s=s+arr[k];
             }
             su=su+s;
        }
        sum=sum+su;
    }
    cout<<sum;
   
}