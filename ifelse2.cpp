#include <iostream>
using namespace std;

int main()
{
    int savings;
    cout<<"apni kamai bataiye\n";
    cin>>savings;
     
     if(savings>30000)
     {
         if(savings>500000)
         {
             cout<<"Car\n";
         }
         else if (savings>60000)
         {
             cout<<"bike\n";

         }
         else{
             cout<<"scooty\n";
         }
     }
     else{
         cout<<"Cycle\n";
     }
 return 0;

}