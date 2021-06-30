#include <iostream>
using namespace std;

int main()
{
    int n1,n2,n3;
    cout<<"Enter the first number\n";
    
    cin>>n1;
    cout<<"Enter the second number\n";
    
    cin>>n2;
    cout<<"Enter the third number\n";
    
    cin>>n3;

    if(n1>n2)
    {
        if(n1>n3)
        {
            cout<<" 1 is the greatest no.\n";
        }
        else
        {
              cout<<"3 is the greatest no.\n";
        }
    }
    
    else
    {
        if(n2>n3)
        {
        cout<<"2 is greates no.\n";
        }
        else
        {
            cout<<"3 is greatest\n";
        }
        
    }
    
}