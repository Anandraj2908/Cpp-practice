#include<iostream>

using namespace std;

int count(int n){
    //write your code here
    if(n==0){
        return 0;
    }
    int c=1;
    if(n%10==n){
        return c;
    }
    
    return c+count(n/10);
}

int main(){
    int n;
    cin >> n;
  
    cout << count(n) << endl;
}


