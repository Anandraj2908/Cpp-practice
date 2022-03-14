#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    int term;
    int i=1;
    while(count < (n+1)){
        term=(3*i)+2;
        if(term%4 != 0){
           cout<<term<<" ";
           count++;
        }
        i++;
    }

}