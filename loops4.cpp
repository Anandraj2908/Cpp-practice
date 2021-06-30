#include <iostream>
using namespace std;
 int main()
 {
     int n;
     cout<<"enter number\n";
     cin>>n;
     int sum;
     sum=0;
     while(n>=0)
     {
        sum=sum+n;
        cout<<"enter numbers";
        cin>>n;

     }
     cout << "\nThe sum is " << sum << endl;

         return 0;
 }