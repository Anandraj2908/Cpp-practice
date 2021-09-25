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
    int key;
    cout<<"Enter the number to find :";
    cin>>key;
    for(int i=1;i<n;i++)
    {
        int current =arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
    cout<<endl;
    int s=0;
    int l=n;
    while(s<=l)
    {
         int mid=(s+l)/2;
        if(arr[mid]==key)
        {
            cout<<arr[mid]<<"is present ";

            break;
            
        }
        else if(arr[mid]>key)
        {
            l=mid-1;
            
            
        }
        else
        {
            s=mid+1;
            
        
        }
        
        
    }
    if(s>l)
    {
        cout<<"not present";
    }
    
}