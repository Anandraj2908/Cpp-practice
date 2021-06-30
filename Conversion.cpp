
#include <bits/stdc++.h>
using namespace std;

int binaryToDecimal(int n)
{
int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans += x*y;

        x*=2;
        n /=10;
    }
    return ans;
}
int octalToDecimal(int n)
{
int ans=0;
    int x=1;
    while(n>0)
    {
        int y=n%10;
        ans += x*y;

        x*=8;
        n /=10;
    }
    return ans;
}
int hexToDecimal(string n)
{
int ans=0;
    int x=1;
    int s=n.size();
    for(int i=s-1;i>=0;i--)
    {
        if(n[i] >= '0' && n[i] <='9')
        {
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans += x*(n[i] - 'A' + 10);
        }
        x*=16;
    }
    return ans;
}
int decimalToBinary(int n)
{
    int x= 1;
    int ans= 0;
    while(x <= n)
    
        x*=2;
    
    x/=2;
    while(x>0)
    {
       int lastDigit=n/x;
       n-=lastDigit*x;
       x=x/2;
       ans=ans*10 + lastDigit; 

    }
    return ans;
}
int decimalToOctal(int n)
{
    int x= 1;
    int ans= 0;
    while(x <= n)
    
        x*=8;
    
    x/=8;
    while(x>0)
    {
       int lastDigit=n/x;
       n-=lastDigit*x;
       x=x/8;
       ans=ans*10 + lastDigit; 

    }
    return ans;
}
string decimalToHexa(int n)
{
    int x= 1;
    string ans= " ";
    while(x <= n)
    
        x*=16;
    
    x/=16;
    while(x>0)
    {
       int lastDigit=n/x;
       n-=lastDigit*x;
       x=x/16;
      if(lastDigit<=9)
      {
          ans=ans + to_string(lastDigit);
      } 
      else
      {
          char c='A' + lastDigit -10;
          ans.push_back(c);
      }

    }
    return ans;
}
int main()
    { 
        int n;
       cin>>n;
       int o;
       cin>>o;
       string hx;
       cin>>hx;
       int d;
       cin>>d;
       int oct;
       cin>>oct;
       int st;
       cin>>st;
        int out=binaryToDecimal(n);
        int pout=octalToDecimal(o);
        int hexa=hexToDecimal(hx);
        int bd=decimalToBinary(d);
        int ot=decimalToOctal(oct);
        string he=decimalToHexa(st);
        cout<<out<<endl;
        cout<<pout<<endl;
        cout<<hexa<<endl;
        cout<<bd<<endl;
        cout<<ot<<endl;
        cout<<he<<endl;
    }

    