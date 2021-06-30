#include <iostream>
#include <math.h>
using namespace std;

bool isPrime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            return false;
         
        }
    }
     return true;
    
}
int main()
{
    int num1,num2;
    cin>>num1>>num2;
    
    for(int n1=num1;n1<=num2;n1++)
    {
        if(isPrime(n1))
        {
            cout<<n1<<" ";
        }
        
    }
}