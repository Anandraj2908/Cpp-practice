#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"No. of element in array"<<endl;
    cin>>n;
    int arr[n+1];
    for(int a=0;a<n;a++)
    {
        cout<<"Enter the no."<<a+1<<" element ";
        cin>>arr[a];
    }
    arr[n+1]=-1;
    if(n==1)
    {
        cout<<"1"<<endl;
        return;
    }
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>mx && arr[i]>arr[i+1])
        {
            ans++;
        }
        mx=max(arr[i],mx);
    }
    cout<<ans<<endl;
}
