#include <iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"enter no.\n";
     cin>>n;
     int i;
     for (i = 2; i < n; i++)
     {
         if (n%i==0)
         {
             cout<<"not prime\n";
             break;
             
         }
         
         
     }

     if (i==n)
     {
         cout<<"IS prime "<<n<<endl;
     }
     
     return 0;
 }