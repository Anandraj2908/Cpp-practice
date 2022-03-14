#include <iostream>
using namespace std;

int main()
{
    int i=10;
    cout<< &i <<endl; //address of i =&i
    int *p = &i;  //if we use int p =&i it wont run, we need to make sure it is int *p =&i
    cout<<p<<endl;
    cout<<*p<<endl;// *p gives the value pointed by p
    cout<<sizeof(p)<<endl;
}
