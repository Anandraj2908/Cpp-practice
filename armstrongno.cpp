#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int k;
    cin>>k;
    int n=k;
    int digit=0;
    int sum=0;
    while(n>0)
    {
        digit=n%10;
        int cc=pow(digit,3);
        sum=sum+cc;
        n=n/10;
        
        
    }
    if(sum==k)
    {
        cout<<"armstrong no.";
    }
    else
    {
        cout<<"not armstrong";
    }
}