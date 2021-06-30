#include <iostream>
using namespace std;

int main()
{
    int pocketMoney;
    cout<<"enter amount given to neha (>100)\n";
    cin>>pocketMoney;
    for(int i=1;i<=30;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else if(pocketMoney==0)
        {
            break;
        }
        cout<<"Neha can go out on "<<i<<" date.\n";
        pocketMoney -= 100;
        cout<<"pocket Money is "<<pocketMoney<<" \n";
    }

}