#include<iostream>
using namespace std;
int main(){
    int a,b=1;
    a=0;
    if(++a){
        cout<<b;
    }
    else
    cout<<++b;
}