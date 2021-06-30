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
        for(j=1;j<=c;j++)
        {
            cout<<"* ";
        }
        cout<<" "<<endl;
    }
    
}