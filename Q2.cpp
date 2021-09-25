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
    cout<<arr[n-1]<<" is greatest";
}