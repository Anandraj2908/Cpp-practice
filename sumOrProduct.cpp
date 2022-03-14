/*Write a program that asks the user for a number N and a choice C.
 And then give them the possibility to choose between computing the ,
 sum and computing the product of all integers in the range 1 to N (both inclusive).
*/


#include <iostream>
using namespace std;

int main(){
int n,c;
cin>>n>>c;
if(c==1){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<sum<<endl;
}
else if(c==2){
    int product=1;
    for(int j=1;j<=n;j++){
        product=product*j;
    }
    cout<<product<<endl;
}
else{
    cout<<"-1"<<endl;
}
}