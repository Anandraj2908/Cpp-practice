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
   int curr=0;int sum=0;
   for(int i=0;i<n;i++)
   {
       curr=0;
       for(int j=i;j<n;j++)
       {
           curr=curr+arr[j];
           cout<<curr<<endl;
           sum=sum+curr;
       }
   }
   cout<<sum;
}