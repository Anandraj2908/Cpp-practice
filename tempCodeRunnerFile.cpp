#include<iostream>
using namespace std;

int main(){
    string s1="1256";
    int i=0;
    int num=0;
    cout<<s1[4];
    while(s1[i]){
        num=num*10+(s1[i]-48);
    }
    cout<<num;
}