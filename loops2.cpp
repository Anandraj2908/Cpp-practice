#include <iostream>
using namespace std;

 int main()
 {
     cout<<"enter the value of n\n";
     int n;
    cin>>n;
    int sum=0;
     for(int i=1;i<=n;i++)
     {
         sum=(sum+i);
     }
     cout<<sum<<"is the sum of first "<<n<<" natural nos.";
     return 0;
 }
