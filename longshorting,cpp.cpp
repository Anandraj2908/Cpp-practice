#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int a=0;a<n;a++)
    {
       cin>>arr[a];
    }
    for(int i=0;i<n;i++)
    {
        int t;
        for(int j=0;j<n-i;j++)
        {
              if(arr[j]>arr[j+1])
              {
                  t=arr[j+1];
                  arr[j+1]=arr[j];
                  arr[j]=t;
                  for(int k=0;k<n;k++)
                  {
                       cout<<arr[k];
                  }
              }cout<<endl;
        }
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k];
    }
}