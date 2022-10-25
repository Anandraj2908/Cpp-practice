#include<iostream>
using namespace std;

int power(int x, int n) {
   //base
    if(n==0){
        return 1;
    }
    
    if(x==0){
        return 0;
    }
    
    int ans=x*power(x,n-1);
    return ans;
}


int main(){
    int x, n;
    cin >> x >> n;
  
    cout << power(x, n) << endl;
}