#include <iostream>
using namespace std;


int countZeros(int n) {
    // Write your code here
    
    //base case
    if(n==0){
        return 1;
    }
    else if(n%10==n){
        return 0;
    }
    
    
    
    //recursive call
    int ans=countZeros(n/10);
    
    int sum=0;
    if(n%10==0){
        sum=sum+1;
    }
    return sum+ans;
}


int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}
