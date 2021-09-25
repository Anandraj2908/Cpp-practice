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
    int pd=arr[1]-arr[0];
    int curr=2;
    int ans=2;
    int j=2;
    while(j<n)
    {
        if(arr[j]-arr[j-1]==pd)
        {
            curr++;
        }
        else
        {
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
cout<<ans<<endl;

    

   
}