#include<iostream>
#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n){
   
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
           return false;
        }
    }
    return false;
}
void primeFactors(int n){
     for(int i=2;i<=n;i++){
        if(n%i==0){
            if(isPrime(i)){
                cout<<i<<" ";
            }
            
        }
     }
}
int main(){
    primeFactors(100);
}