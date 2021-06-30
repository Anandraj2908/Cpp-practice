#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n\n";
    cin>>n;
    int val;
    for(int i=1;i<=10;i++)
    {
        val=n*i;
        cout<<n<<" X "<<i<<" = "<<val<<endl;

    }
}