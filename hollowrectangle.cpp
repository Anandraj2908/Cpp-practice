#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int i;
    int j;
    for (i=1;i<=r;i++)
    {
        
        if(i==1||i==r)
        {
             for(j=1;j<=c;j++)
             {
                   cout<<"* ";
             }
             cout<<" "<<endl;
        }
        else
        { 
             for(j=1;j<=c;j++)
             {
                 if(j==1||j==c)
                 {
                   cout<<"* ";
                 }
                 else
                 {
                     cout<<"  ";
                 }
             }
             cout<<" "<<endl;
            

        }
        
    }
    return 0;
    
}